/*
 * Radio_RF_Control.c
 *
 *  Created on: Jul 26, 2020
 *      Author: bbsra
 */

#include <stdio.h>
#include "MY_NRF24_main.h"
//#include "MY_NRF24.h"
//#include "main.h"
//#include "nRF24L01.h"
uint64_t TxpipeAddrs = 0x11223344AA;
char myTxData[32] = "Hello World!";
char AckPayload[32];

uint64_t RxpipeAddrs = 0x11223344AA;
char myRxData[50];
char myAckPayload[32] = "Ack by STMF4";




void NRF24L01_One_Time_Configuartion()
{


  NRF24_begin_caller();
  nrf24_DebugUART_Init_caller();

  printRadioSettings();

  //**** TRANSMIT - ACK ****//
  NRF24_stopListening();
  NRF24_openWritingPipe(TxpipeAddrs);
  NRF24_setAutoAck(false);
  NRF24_setChannel(52);
  NRF24_setPayloadSize(32);

  NRF24_enableDynamicPayloads();
  NRF24_enableAckPayload();

  // Rx
//  NRF24_begin_caller();
//  nrf24_DebugUART_Init(nrf24_huart);

  printRadioSettings();

  NRF24_setAutoAck(false);
  NRF24_setChannel(60);
  NRF24_setPayloadSize(32);
  NRF24_openReadingPipe(1, RxpipeAddrs);
  NRF24_enableDynamicPayloads();
  NRF24_enableAckPayload();

  NRF24_startListening();






}



void NRF24L01_Schedule_And_Event_Control()
{


  // Transmit message
  if(NRF24_write(myTxData, 32))
  {
	NRF24_read(AckPayload, 32);
//	HAL_UART_Transmit(&huart2, (uint8_t *)"Transmitted Successfully\r\n", strlen("Transmitted Successfully\r\n"), 10);

	char myDataack[80];
	sprintf(myDataack, "AckPayload:  %s \r\n", AckPayload);
//	HAL_UART_Transmit(&huart2, (uint8_t *)myDataack, strlen(myDataack), 10);
  }

HAL_Delay(1000);


  // Receive message

  if(NRF24_available())
  {
    NRF24_read(myRxData, 32);
    NRF24_writeAckPayload(1, myAckPayload, 32);

    myRxData[32] = '\r'; myRxData[32+1] = '\n';
//    HAL_UART_Transmit(&huart1, (uint8_t *)myRxData, 32+2, 10);
  }





}
