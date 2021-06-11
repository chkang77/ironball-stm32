#include "7seg.h"

uint32_t DigiData[]={D1,D2,D2,D3,D4};
	
uint32_t SegData[11][7]={
	{Sa,Sb,Sc,Sd,Se,Sf}, //////0
	{Sb,Sc}, //////1
	{Sa,Sb,Sg,Se,Sd}, //////2
	{Sa,Sb,Sg,Sc,Sd}, //////3
	{Sf,Sg,Sb,Sc}, //////4
	{Sa,Sf,Sg,Sc,Sd}, //////5
	{Sa,Sf,Sg,Sc,Sd,Se}, //////6
	{Sa,Sb,Sc}, //////7
	{Sa,Sb,Sc,Sd,Se,Sf,Sg}, //////8
	{Sa,Sb,Sc,Sd,Sf,Sg}, //////9
	{Sdot}, //////10

};
	


void PutFND(uint8_t data){
	uint8_t i;
	
	SEG_DIS;
	for(i=0;i<8;i++){
		if(SegData[data][i]==0)break;
		HAL_GPIO_WritePin(Fnd_Port,SegData[data][i],0);
	}
}