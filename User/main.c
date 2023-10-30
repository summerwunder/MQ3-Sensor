#include "stm32f10x.h"                  // Device header
#include "Delay.h"
#include "OLED.h"
#include "LED.h"
#include "Sensor.h"
#include "Buzzer.h"
#include "KEY.h"

uint16_t threshhold=200;
uint32_t ppmValue;
int main(void)
{
    NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);
	OLED_Init();
	AD_Init();
	Buzzer_Init();  
    LED_Init(); 
    Key_Init();   
	OLED_ShowString(2, 1, "threshhold:");
	OLED_ShowString(1, 1, "ppm:");
    LED_ON_GREEN;
	while (1)
	{           
        ppmValue= AverageValue(); 
       
        if(Key_GetNum()==2)
        {
            /*表示增加了阈值*/
           threshhold++;
        }
        if(Key_GetNum()==1)
        {
            /*表示减少了阈值*/
            threshhold--;
        } 
		OLED_ShowNum(1, 5,ppmValue, 3);
		OLED_ShowNum(2, 13,threshhold, 3);
        if(ppmValue>threshhold)
        {
            LED_ON_RED;
            LED_OFF_GREEN;
            BUZZER_ON;
        }
		Delay_ms(300);
	}
}

