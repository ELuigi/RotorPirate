#include "platform.h"
#include "ActivityLed.h"
//#include "ActivityLed.h"

int main(void) {

HAL_Init();
LED_Init();
//InitPlatform();

  while(1)
  {
    LED_Toggle();
    HAL_Delay(500);
  }
}
