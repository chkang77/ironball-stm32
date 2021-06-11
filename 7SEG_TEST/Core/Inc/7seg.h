#ifndef _7SEG_H  
#define _7SEG_H  
 
/* Edit for your Enviroment///////////////////////////////////////////////////////////////////////////////////////////////////*/
#include "stm32f4xx_hal.h"  //////<---------example stm32f0

extern uint32_t DigiData[];

#define Fnd_Port GPIOA ////////FND GPIO

#define Sa GPIO_PIN_10 ////////SEGMENT GPIO
#define Sb GPIO_PIN_11
#define Sc GPIO_PIN_13
#define Sd GPIO_PIN_15
#define Se GPIO_PIN_8
#define Sf GPIO_PIN_9
#define Sg GPIO_PIN_12
#define Sdot GPIO_PIN_14

#define SEG_OFF 1 ////////////example) common anode type(1 for segOFF-direct connect gpio )
#define SEG_ON 0 ////////////example) common anode type(0 for segON-direct connect gpio )

#define D1 GPIO_PIN_0
#define D2 GPIO_PIN_1
#define D3 GPIO_PIN_2
#define D4 GPIO_PIN_3

#define DIGI_ON 1 ////////////example) common anode type(1 for digiON-direct connect gpio )
#define DIGI_OFF 0 ////////////example) common anode type(0 for digiOFF-direct connect gpio )

	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////*eof Edit for your Enviroment///////////////////////*/
	
	
	
	
	
	
	//////////////////////DO NOT EDIT !! blow code///////////////////////////////////////
	#define SEG_DIS HAL_GPIO_WritePin(Fnd_Port,Sa|Sb|Sc|Sd|Se|Sf|Sg|Sdot,SEG_OFF)
	#define DIGI_DIS HAL_GPIO_WritePin(Fnd_Port,D1|D2|D3|D4,DIGI_OFF)
	

	void PutFND(uint8_t data);

 #endif  
