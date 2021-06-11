################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../ECUAL/SEVEN_SEGMENTS/SEVEN_SEGMENTS.c \
../ECUAL/SEVEN_SEGMENTS/SEVEN_SEGMENTS_cfg.c 

OBJS += \
./ECUAL/SEVEN_SEGMENTS/SEVEN_SEGMENTS.o \
./ECUAL/SEVEN_SEGMENTS/SEVEN_SEGMENTS_cfg.o 

C_DEPS += \
./ECUAL/SEVEN_SEGMENTS/SEVEN_SEGMENTS.d \
./ECUAL/SEVEN_SEGMENTS/SEVEN_SEGMENTS_cfg.d 


# Each subdirectory must supply rules for building sources it contributes
ECUAL/SEVEN_SEGMENTS/SEVEN_SEGMENTS.o: ../ECUAL/SEVEN_SEGMENTS/SEVEN_SEGMENTS.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F103xB -DDEBUG -c -I../Inc -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/STM32F1xx_HAL_Driver/Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"ECUAL/SEVEN_SEGMENTS/SEVEN_SEGMENTS.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
ECUAL/SEVEN_SEGMENTS/SEVEN_SEGMENTS_cfg.o: ../ECUAL/SEVEN_SEGMENTS/SEVEN_SEGMENTS_cfg.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F103xB -DDEBUG -c -I../Inc -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/STM32F1xx_HAL_Driver/Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"ECUAL/SEVEN_SEGMENTS/SEVEN_SEGMENTS_cfg.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

