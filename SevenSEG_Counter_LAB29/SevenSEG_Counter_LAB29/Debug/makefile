################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Startup/subdir.mk
-include Src/subdir.mk
-include ECUAL/SEVEN_SEGMENTS/subdir.mk
-include Drivers/STM32F1xx_HAL_Driver/Src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
SevenSEG_Counter_LAB29.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
SevenSEG_Counter_LAB29.list \

OBJCOPY_BIN += \
SevenSEG_Counter_LAB29.bin \


# All Target
all: SevenSEG_Counter_LAB29.elf secondary-outputs

# Tool invocations
SevenSEG_Counter_LAB29.elf: $(OBJS) $(USER_OBJS) C:\Users\Khaled\ Magdy\Desktop\SevenSEG_Counter_LAB29\STM32F103C8TX_FLASH.ld
	arm-none-eabi-gcc -o "SevenSEG_Counter_LAB29.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m3 -T"C:\Users\Khaled Magdy\Desktop\SevenSEG_Counter_LAB29\STM32F103C8TX_FLASH.ld" --specs=nosys.specs -Wl,-Map="SevenSEG_Counter_LAB29.map" -Wl,--gc-sections -static --specs=nano.specs -mfloat-abi=soft -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

SevenSEG_Counter_LAB29.list: $(EXECUTABLES)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "SevenSEG_Counter_LAB29.list"
	@echo 'Finished building: $@'
	@echo ' '

SevenSEG_Counter_LAB29.bin: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "SevenSEG_Counter_LAB29.bin"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) *
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST) $(OBJCOPY_BIN)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
