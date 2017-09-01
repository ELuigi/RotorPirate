#ifndef __TARGET_H
#define __TARGET_H



#include "stm32f1xx_hal.h"

/*###################### Activity led ###################################*/

#define LED_PIN                         GPIO_PIN_0
#define LED_GPIO_PORT                   GPIOC

/*###################### Activity led ###################################*/

#define LED_GPIO_CLK_ENABLE()           __HAL_RCC_GPIOC_CLK_ENABLE()
#define LED_GPIO_CLK_DISABLE()          __HAL_RCC_GPIOC_CLK_DISABLE()



#endif
