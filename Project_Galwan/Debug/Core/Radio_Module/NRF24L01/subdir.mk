################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/Radio_Module/NRF24L01/Radio_RF_Control.c 

OBJS += \
./Core/Radio_Module/NRF24L01/Radio_RF_Control.o 

C_DEPS += \
./Core/Radio_Module/NRF24L01/Radio_RF_Control.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Radio_Module/NRF24L01/Radio_RF_Control.o: ../Core/Radio_Module/NRF24L01/Radio_RF_Control.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32F407xx -c -I../Drivers/CMSIS/Include -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Core/Inc -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Core/Radio_Module/NRF24L01/Radio_RF_Control.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

