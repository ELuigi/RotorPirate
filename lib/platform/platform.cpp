
#include <platform.h>
#include "ActivityLed.h"


void InitPlatform()
{
  HAL_Init();
  LED_Init();
}
