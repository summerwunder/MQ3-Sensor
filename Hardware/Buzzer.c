#include "stm32f10x.h"                  // Device header
#include "Buzzer.h"
void Buzzer_Init(void)
{    
    RCC_APB2PeriphClockCmd(RCC_BUZZER_PORT, ENABLE);       
    GPIO_InitTypeDef GPIO_InitStructure;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
    GPIO_InitStructure.GPIO_Pin = BUZZER_PIN;
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_Init(BUZZER_PORT, &GPIO_InitStructure);
}
