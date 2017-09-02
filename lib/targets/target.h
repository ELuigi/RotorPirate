#ifndef __TARGET_H
#define __TARGET_H



#include "stm32f1xx_hal.h"

/*###################### Activity led ###################################*/

#define LED_PIN                         GPIO_PIN_0
#define LED_GPIO_PORT                   GPIOC

/*###################### Activity led ###################################*/

#define LED_GPIO_CLK_ENABLE()           __HAL_RCC_GPIOC_CLK_ENABLE()
#define LED_GPIO_CLK_DISABLE()          __HAL_RCC_GPIOC_CLK_DISABLE()

/*######################    timer     ###################################*/

#define timer1 TIM1
#define timer2 TIM2
#define timer3 TIM3
#define timer4 TIM4

#define timer1Chanel 1
#define timer2Chanel 1
#define timer3Chanel 3
#define timer4Chanel 1
#endif
