#ifndef __ACTIVITY_LED_H
#define __ACTIVITY_LED_H

#ifdef __cplusplus
 extern "C" {
#endif

#include "target.h"


void LED_Init();
void LED_DeInit();
void LED_On();
void LED_Off();
void LED_Toggle();



#ifdef __cplusplus
}
#endif

#endif /* __LED_H */
