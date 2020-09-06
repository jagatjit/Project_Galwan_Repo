


#include "RJA_SSD1306_Inc.h"

#include "stdio.h"
#include "main.h"


	// OLED Parameter
	int x=0, y=0, size=2;
	char s[50] ="Welcome to Project Galwan";	//gOLED_Print
	bool colour= 1, bg = 0;
	unsigned int gCounter=0;
	unsigned char c = 'A', d;

	OLED Obj_OLED_01;
	extern I2C_HandleTypeDef hi2c1;
	extern uint16_t gTx_Count, gTx_Fail;
	extern uint16_t gRx_Count, gRx_Fail;
	extern uint8_t  gRSSI, gdB;

	uint16_t gTimer_D_RF_Info = 0;










void OLED_Initial_Configuartion()
{

  Obj_OLED_01.init(&hi2c1);

  Obj_OLED_01.fill(0);
  Obj_OLED_01.drawFullscreen();

  Obj_OLED_01.text(2, 2, "WELCOME to",  1, 1, 2  );
  Obj_OLED_01.text(0, 22, "  Project ",  1, 0, 2  );
  Obj_OLED_01.text(2, 49, "- GALWAN -",  1, 0, 2  );
  Obj_OLED_01.drawFullscreen();
  HAL_Delay(1000);

  Obj_OLED_01.invert();
  Obj_OLED_01.drawFullscreen();
  HAL_Delay(1000);

}




void Display_RF_Info()
{

  Obj_OLED_01.fill(0);
  Obj_OLED_01.drawFullscreen();

  sprintf( s, "Tx %d  %d ", gTx_Count, gTx_Fail );
  Obj_OLED_01.text(0, 0, s,  1, 0, 2  );

  sprintf( s, "Rx %d  %d ", gRx_Count , gRx_Fail );
  Obj_OLED_01.text(0, 24, s,  1, 0, 2  );

  sprintf( s, "RSSI %d dB %d", gRSSI, gdB );
  Obj_OLED_01.text(0, 49, s,  1, 0, 2  );


  Obj_OLED_01.drawFullscreen();
}




void OLED_Schedule_And_Event_Control()
{

//  Obj_OLED_01.fill(0);
//  Obj_OLED_01.drawFullscreen();
	Display_RF_Info();

	if(gTimer_D_RF_Info == 0)
	{
		gTimer_D_RF_Info = 1000;
		Display_RF_Info();

	  HAL_GPIO_TogglePin(GPIOD, GPIO_PIN_13);		// Red LED
	}


/*
  sprintf( s, "x=%d,y=%d", x,y++ );
  Obj_OLED_01.text(x, y, s,  colour, bg, size  );
  if( (x > 127) || (y > 64 ))
  {
	  x= 0; y =0;
  }
  d+=1;
  c = d;
 */

//  Obj_OLED_01.character(0, 20,  c, colour, bg, size);
//  x++; y++;
//  Obj_OLED_01.drawFullscreen();
  gCounter++;

//  HAL_Delay(500);

 // sprintf( s, " Project Galwan " );

//  Obj_OLED_01.text(0, 32, s,  colour, bg, size  );
//  Obj_OLED_01.drawFullscreen();

//  Obj_OLED_01.inverseDisplay(0);
//  Obj_OLED_01.inverseDisplay(1);

//	char myDataack[80];
//	sprintf(myDataack, "AckPayload:  %s \r\n" s);









}












