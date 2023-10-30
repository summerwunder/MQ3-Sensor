#ifndef __LED_H
#define __LED_H
#include "stm32f10x.h"                  // Device header
#include "Delay.h"

#define LED_PORT GPIOA
#define LED_PIN_RED GPIO_Pin_0
#define LED_PIN_GREEN GPIO_Pin_1
#define RCC_LED_PORT RCC_APB2Periph_GPIOA

#define LED_ON_RED GPIO_SetBits(LED_PORT,LED_PIN_RED)
#define LED_OFF_RED GPIO_ResetBits(LED_PORT,LED_PIN_RED)
#define LED_ON_GREEN GPIO_SetBits(LED_PORT,LED_PIN_GREEN)
#define LED_OFF_GREEN GPIO_ResetBits(LED_PORT,LED_PIN_GREEN)
void LED_Init(void);

#endif
