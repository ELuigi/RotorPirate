#include "stm32f1xx.h"
#include "platform.h"

int main(void) {


InitPlatform();

  while(1)
  {
    LED_Toggle();
    HAL_Delay(500);

  }

}
