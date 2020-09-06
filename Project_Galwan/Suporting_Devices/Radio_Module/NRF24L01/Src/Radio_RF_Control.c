/*
 * Radio_RF_Control.c
 *
 *  Created on: Jul 26, 2020
 *      Author: bbsra
 */

#include <stdio.h>
#include "Helper_Function.h"

//#include "Radio_RF_Control.h"
#include "MY_NRF24_main.h"

//#include "nRF24L01.h"
uint64_t TxpipeAddrs = 0x11223344AA;
char myTxData[32] = "Tx data - Hello World";
char AckPayload[32];

uint64_t RxpipeAddrs = 0x11223344AF;
char myRxData[50];
char myAckPayload[32] = "Ack by STMF4";

uint16_t gTx_Count = 0 , gTx_Fail = 0, gRx_Count = 0 , gRx_Fail = 0;
uint8_t  gRSSI=0, gdB=0;
uint8_t  gTxRxFlag =0;
uint8_t  gPrint_Counter =0;




// For Debugging purpose
void Read_User_Pin()
{

	if(HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_0))
	{
		gTxRxFlag = !gTxRxFlag;

		printConfigReg();
		printStatusReg();
	  NRF24_powerUp();
	  printRadioSettings();
	}

}




void NRF24L01_Initial_Configuartion()
{

  NRF24_begin_caller();

	printConfigReg();
	printStatusReg();

 // nrf24_DebugUART_Init_caller();
//  NRF24_powerUp();

	printConfigReg();
	printStatusReg();

	NRF24_setAutoAck(false);
	NRF24_setChannel(108);
	NRF24_setPayloadSize(32);


	//  NRF24_enableDynamicPayloads();
	//  NRF24_enableAckPayload();

	NRF24_openWritingPipe(TxpipeAddrs);
	NRF24_openReadingPipe(1, RxpipeAddrs);
  printRadioSettings();

}

uint8_t Radio_Transmit_Data()
{
	uint8_t ret_val;

	NRF24_stopListening();

	if(ret_val = NRF24_write(myTxData, 32))
	{
//		NRF24_read(AckPayload, 32);
		gTx_Count++;

//	sprintf(serial_console_print, "AckPayload:  %s \r\n", AckPayload);
//	Print_Debug_Info_UART(serial_console_print);

	}
	else
	{
		gTx_Fail++;

	}

	return ret_val;
}


uint8_t Radio_Receive_Data()
{
	uint8_t ret_val;

	NRF24_startListening();

	ret_val = NRF24_available();
	if(ret_val)
	{
		NRF24_read(myRxData, 32);
//    NRF24_writeAckPayload(1, myAckPayload, 32);
		gRx_Count++;

//	sprintf(serial_console_print, "myAckPayload:  %s \r\n", myAckPayload);
//	Print_Debug_Info_UART(serial_console_print);

	}

	return ret_val;
}


void NRF24L01_Schedule_And_Event_Control()
{
	char serial_console_print[80];
	gPrint_Counter++;

	Read_User_Pin();

  if(gTxRxFlag)
  {
  	Print_Debug_Info_UART("----------  Configured as Transmitter  ------------ \r\n");
		sprintf(myTxData,"Tx Count= %d, Tx Failed= %d \r ", gTx_Count, gTx_Fail);
		sprintf(serial_console_print, "Tx Count= %d, Tx Failed= %d, Rx Count= %d, Rx Failed= %d  \r\n",gTx_Count , gTx_Fail, gRx_Count, gRx_Fail);

		Radio_Transmit_Data();
		Print_Debug_Info_UART(serial_console_print);
  }
  else
  {		//Serving as Rx

  	Print_Debug_Info_UART(" - Configured as Receiver - \r\n");
	  HAL_GPIO_TogglePin(GPIOD, GPIO_PIN_12);	// Green LED

	  if( Radio_Receive_Data())
	  {
			myRxData[32] = '\r'; myRxData[32+1] = '\n';
			sprintf(serial_console_print, "Received Data:{ %s} Rx Count %d \r\n", myRxData, gRx_Count);
			Print_Debug_Info_UART(serial_console_print);
	  }


  }

  if(gPrint_Counter % 5 == 0)
  {
		printConfigReg();
		printStatusReg();

  }
}


