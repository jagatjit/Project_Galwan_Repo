################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/Src/stm32f4xx_hal_msp.c \
../Core/Src/stm32f4xx_it.c \
../Core/Src/syscalls.c \
../Core/Src/sysmem.c \
../Core/Src/system_stm32f4xx.c 

CPP_SRCS += \
../Core/Src/main.cpp 

C_DEPS += \
./Core/Src/stm32f4xx_hal_msp.d \
./Core/Src/stm32f4xx_it.d \
./Core/Src/syscalls.d \
./Core/Src/sysmem.d \
./Core/Src/system_stm32f4xx.d 

OBJS += \
./Core/Src/main.o \
./Core/Src/stm32f4xx_hal_msp.o \
./Core/Src/stm32f4xx_it.o \
./Core/Src/syscalls.o \
./Core/Src/sysmem.o \
./Core/Src/system_stm32f4xx.o 

CPP_DEPS += \
./Core/Src/main.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Src/main.o: ../Core/Src/main.cpp
	arm-none-eabi-g++ "$<" -mcpu=cortex-m4 -std=gnu++14 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32F407xx -c -I../Drivers/CMSIS/Include -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Core/Inc -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I"C:/Working Directory/Embedded IoT/Projects/Project_Galwan/Project_Galwan_Repo/Project_Galwan/Suporting_Devices/SSD1306/Inc" -I"C:/Working Directory/Embedded IoT/Projects/Project_Galwan/Project_Galwan_Repo/Project_Galwan/Suporting_Devices/Accelelometer_Chip" -I"C:/Working Directory/Embedded IoT/Projects/Project_Galwan/Project_Galwan_Repo/Project_Galwan/Suporting_Devices/Common_Helper_Fuctions/Inc" -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-threadsafe-statics -fno-use-cxa-atexit -Wall -fstack-usage -MMD -MP -MF"Core/Src/main.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Core/Src/stm32f4xx_hal_msp.o: ../Core/Src/stm32f4xx_hal_msp.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32F407xx -c -I../Drivers/CMSIS/Include -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Core/Inc -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I"C:/Working Directory/Embedded IoT/Projects/Project_Galwan/Project_Galwan_Repo/Project_Galwan/Suporting_Devices/Radio_Module/NRF24L01/Inc" -I"C:/Working Directory/Embedded IoT/Projects/Project_Galwan/Project_Galwan_Repo/Project_Galwan/Suporting_Devices/Accelelometer_Chip" -I"C:/Working Directory/Embedded IoT/Projects/Project_Galwan/Project_Galwan_Repo/Project_Galwan/Suporting_Devices/SSD1306/Inc" -I"C:/Working Directory/Embedded IoT/Projects/Project_Galwan/Project_Galwan_Repo/Project_Galwan/Suporting_Devices/Common_Helper_Fuctions/Inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Core/Src/stm32f4xx_hal_msp.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Core/Src/stm32f4xx_it.o: ../Core/Src/stm32f4xx_it.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32F407xx -c -I../Drivers/CMSIS/Include -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Core/Inc -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I"C:/Working Directory/Embedded IoT/Projects/Project_Galwan/Project_Galwan_Repo/Project_Galwan/Suporting_Devices/Radio_Module/NRF24L01/Inc" -I"C:/Working Directory/Embedded IoT/Projects/Project_Galwan/Project_Galwan_Repo/Project_Galwan/Suporting_Devices/Accelelometer_Chip" -I"C:/Working Directory/Embedded IoT/Projects/Project_Galwan/Project_Galwan_Repo/Project_Galwan/Suporting_Devices/SSD1306/Inc" -I"C:/Working Directory/Embedded IoT/Projects/Project_Galwan/Project_Galwan_Repo/Project_Galwan/Suporting_Devices/Common_Helper_Fuctions/Inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Core/Src/stm32f4xx_it.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Core/Src/syscalls.o: ../Core/Src/syscalls.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32F407xx -c -I../Drivers/CMSIS/Include -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Core/Inc -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I"C:/Working Directory/Embedded IoT/Projects/Project_Galwan/Project_Galwan_Repo/Project_Galwan/Suporting_Devices/Radio_Module/NRF24L01/Inc" -I"C:/Working Directory/Embedded IoT/Projects/Project_Galwan/Project_Galwan_Repo/Project_Galwan/Suporting_Devices/Accelelometer_Chip" -I"C:/Working Directory/Embedded IoT/Projects/Project_Galwan/Project_Galwan_Repo/Project_Galwan/Suporting_Devices/SSD1306/Inc" -I"C:/Working Directory/Embedded IoT/Projects/Project_Galwan/Project_Galwan_Repo/Project_Galwan/Suporting_Devices/Common_Helper_Fuctions/Inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Core/Src/syscalls.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Core/Src/sysmem.o: ../Core/Src/sysmem.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32F407xx -c -I../Drivers/CMSIS/Include -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Core/Inc -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I"C:/Working Directory/Embedded IoT/Projects/Project_Galwan/Project_Galwan_Repo/Project_Galwan/Suporting_Devices/Radio_Module/NRF24L01/Inc" -I"C:/Working Directory/Embedded IoT/Projects/Project_Galwan/Project_Galwan_Repo/Project_Galwan/Suporting_Devices/Accelelometer_Chip" -I"C:/Working Directory/Embedded IoT/Projects/Project_Galwan/Project_Galwan_Repo/Project_Galwan/Suporting_Devices/SSD1306/Inc" -I"C:/Working Directory/Embedded IoT/Projects/Project_Galwan/Project_Galwan_Repo/Project_Galwan/Suporting_Devices/Common_Helper_Fuctions/Inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Core/Src/sysmem.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Core/Src/system_stm32f4xx.o: ../Core/Src/system_stm32f4xx.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32F407xx -c -I../Drivers/CMSIS/Include -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Core/Inc -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I"C:/Working Directory/Embedded IoT/Projects/Project_Galwan/Project_Galwan_Repo/Project_Galwan/Suporting_Devices/Radio_Module/NRF24L01/Inc" -I"C:/Working Directory/Embedded IoT/Projects/Project_Galwan/Project_Galwan_Repo/Project_Galwan/Suporting_Devices/Accelelometer_Chip" -I"C:/Working Directory/Embedded IoT/Projects/Project_Galwan/Project_Galwan_Repo/Project_Galwan/Suporting_Devices/SSD1306/Inc" -I"C:/Working Directory/Embedded IoT/Projects/Project_Galwan/Project_Galwan_Repo/Project_Galwan/Suporting_Devices/Common_Helper_Fuctions/Inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Core/Src/system_stm32f4xx.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

