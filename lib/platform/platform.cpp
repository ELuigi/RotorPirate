/*
 * LED.c
 *
 *  Created on: 6 mai 2017
 *      Author: eluigi5685
 */

#include "Platform.h"



void InitPlatform()
{
  HAL_Init();
  LED_Init();
}

void PlatformActivity()
{
  LED_Toggle();
  HAL_Delay(500);
}
