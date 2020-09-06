

#include <string.h>
#include "stm32f4xx_hal.h"



extern UART_HandleTypeDef huart2;





void Print_Debug_Info_UART(char print_data[])
{

  HAL_UART_Transmit(&huart2, (uint8_t *)print_data, strlen(print_data), 10);



}


