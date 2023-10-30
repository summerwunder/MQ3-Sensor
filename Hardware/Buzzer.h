#include "stm32f10x.h"                  // Device header

#define BUZZER_PORT GPIOA
#define BUZZER_PIN GPIO_Pin_8
#define RCC_BUZZER_PORT RCC_APB2Periph_GPIOA
#define BUZZER_ON GPIO_ResetBits(BUZZER_PORT,BUZZER_PIN)
#define BUZZER_OFF GPIO_SetBits(BUZZER_PORT,BUZZER_PIN)
void Buzzer_Init(void);
