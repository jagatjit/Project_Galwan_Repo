

#include "RJA_SSD1306.h"
//#include "string.h"
#include "stdio.h"



// OLED Parameter
int x=0, y=0, size=2; 
string s ="Welcome to Project Galwan";
bool colour= 1, bg = 0;
unsigned int gCounter=0;
unsigned char c = 'A', d;

extern OLED Obj_OLED_01;



void OLED_One_Time_Configuartion()
{



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




void OLED_Schedule_And_Event_Control()
{

  Obj_OLED_01.fill(0);
  Obj_OLED_01.drawFullscreen();

//  sprintf( s, "x= %d and y= %d" );
  Obj_OLED_01.text(x, y, "Rx- RSSI ",  colour, bg, size  );
  d+=1;
  c = d;
  Obj_OLED_01.character(0, 10,  c, colour, bg, size);
//  x++; y++;
  Obj_OLED_01.drawFullscreen();
  gCounter++;

  HAL_Delay(500);

  s="Proj Galwan ";
  Obj_OLED_01.text(0, 32, s,  colour, bg, size  );
  Obj_OLED_01.drawFullscreen();

//  Obj_OLED_01.inverseDisplay(0);
//  Obj_OLED_01.inverseDisplay(1);








  HAL_GPIO_TogglePin(GPIOD, GPIO_PIN_13);


}












