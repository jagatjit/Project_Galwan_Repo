

#include "Main_Device_Control_And_Schedule.h"
#include "MY_LIS3DSH.h"


#include "Radio_RF_Control.h"

LIS3DSH_DataScaled myData;

uint8_t gAccelerometer_DataReady_Flag=0;
extern uint16_t gTimer_Radio_Schedule;
extern uint8_t  gTxRxFlag;





void All_Devices_Initial_Configuration()
{

//	Accelerometer_LIS3DSH_Init_Configuration();
	NRF24L01_Initial_Configuartion();







}



void All_Device_Control_And_Schedule()
{

//  Accelerometer_LIS3DSH_Control();

//

	if(gTimer_Radio_Schedule == 0)
	{
		gTimer_Radio_Schedule = 500;
		NRF24L01_Schedule_And_Event_Control();
	}

  if(!gTxRxFlag)
  	Radio_Receive_Data();





}









void Accelerometer_LIS3DSH_Control()
{


	if(gAccelerometer_DataReady_Flag == 1)
	{
		gAccelerometer_DataReady_Flag = 0;
		myData = LIS3DSH_GetDataScaled();
//		HAL_GPIO_TogglePin(GPIOD, GPIO_PIN_12);		// Green LED
	}




}
