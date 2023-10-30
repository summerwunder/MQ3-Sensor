#include "LED.h"

void LED_Init(void)
{
    RCC_APB2PeriphClockCmd(RCC_LED_PORT,ENABLE);
    GPIO_InitTypeDef GPIO_InitStructure;
    GPIO_InitStructure.GPIO_Mode=GPIO_Mode_Out_PP;
    GPIO_InitStructure.GPIO_Pin=LED_PIN_RED|LED_PIN_GREEN;
    GPIO_InitStructure.GPIO_Speed=GPIO_Speed_50MHz;
    GPIO_Init(LED_PORT,&GPIO_InitStructure);   
}




