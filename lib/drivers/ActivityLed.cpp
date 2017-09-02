/*
 * LED.c
 *
 *  Created on: 6 mai 2017
 *      Author: eluigi5685
 */

#include <ActivityLed.h>



void LED_Init()
{
  GPIO_InitTypeDef  gpioinitstruct;

  /* Enable the GPIO_LED Clock */
  LED_GPIO_CLK_ENABLE();

  /* Configure the GPIO_LED pin */
  gpioinitstruct.Pin    = LED_PIN;
  gpioinitstruct.Mode   = GPIO_MODE_OUTPUT_PP;
  gpioinitstruct.Pull   = GPIO_NOPULL;
  gpioinitstruct.Speed  = GPIO_SPEED_FREQ_HIGH;


  HAL_GPIO_Init(LED_GPIO_PORT, &gpioinitstruct);

  /* Reset PIN to switch off the LED */
  HAL_GPIO_WritePin(LED_GPIO_PORT,LED_PIN, GPIO_PIN_RESET);
}

void LED_DeInit()
{

  /* Turn off LED */
  HAL_GPIO_WritePin(LED_GPIO_PORT,LED_PIN, GPIO_PIN_RESET);
  /* DeInit the GPIO_LED pin */
  HAL_GPIO_DeInit(LED_GPIO_PORT, LED_PIN);
}

void LED_On()
{
  HAL_GPIO_WritePin(LED_GPIO_PORT, LED_PIN, GPIO_PIN_SET);
}

void LED_Off()
{
  HAL_GPIO_WritePin(LED_GPIO_PORT, LED_PIN, GPIO_PIN_RESET);
}
void LED_Toggle()
{
  HAL_GPIO_TogglePin(LED_GPIO_PORT, LED_PIN);
}
