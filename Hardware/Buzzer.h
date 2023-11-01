
#ifndef __BUZZER_H
#define __BUZZER_H
#include "stm32f10x.h"                  // Device header
#define BUZZER_PORT GPIOB
#define BUZZER_PIN GPIO_Pin_0
#define RCC_BUZZER_PORT RCC_APB2Periph_GPIOB
#define BUZZER_ON GPIO_ResetBits(BUZZER_PORT,BUZZER_PIN)
#define BUZZER_OFF GPIO_SetBits(BUZZER_PORT,BUZZER_PIN)
void Buzzer_Init(void);
#endif
