

#include <string.h>
#include "stm32f4xx_hal.h"



extern UART_HandleTypeDef huart2;
char gSerial_Console_Print_Buff[100];

uint16_t gTimer_Display_RF_Info = 0;
uint16_t gTimer_Radio_Schedule = 0;
uint16_t gTimer_Accelerometer_Schedule = 0;




void Print_Debug_Info_UART(char print_data[])
{

  HAL_UART_Transmit(&huart2, (uint8_t *)print_data, strlen(print_data), 10);



}


