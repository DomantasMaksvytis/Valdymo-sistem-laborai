#include "main.h"
#define BIT21 0B1000000000000000000000



int main(void)
{


	RCC->AHBENR |= 1 << 21;

	RCC->AHBENR |= RCC_AHBENR_GPIOAEN;


	GPIOE->MODER |= GPIO_MODER_MODER8_0;

	GPIOE->MODER |= GPIO_MODER_MODER9_0;

	GPIOE->MODER |= GPIO_MODER_MODER10_0;

	GPIOE->MODER |= GPIO_MODER_MODER11_0;

	GPIOE->MODER |= GPIO_MODER_MODER12_0;

	GPIOE->MODER |= GPIO_MODER_MODER13_0;

	GPIOE->MODER |= GPIO_MODER_MODER14_0;

	GPIOE->MODER |= GPIO_MODER_MODER15_0;

	GPIOE->MODER &=~ GPIO_MODER_MODER0_0;

	GPIOE->MODER &=~ GPIO_MODER_MODER0_1;

  while (1)
  {
	  if (GPIOA->IDR & GPIO_IDR_0)
	          {

	              GPIOE->BSRR |= 0xFF <<8;
	          }
	          else
	          {

	              GPIOE->BSRR |= 0xFF << (8+16);
	          }
  }
}
