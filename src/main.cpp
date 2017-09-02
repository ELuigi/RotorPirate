
#include "Platform.h"

void InitPlatform();
void PlatformActivity();

int main(void) {

InitPlatform();

  while(1)
  {
    PlatformActivity();
  }
}
