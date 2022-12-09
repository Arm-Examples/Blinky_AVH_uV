/*----------------------------------------------------------------------------
  Include header files
 *---------------------------------------------------------------------------*/
#include "RTE_Components.h"
#include CMSIS_device_header
#include "Blinky.h"

/*----------------------------------------------------------------------------
  Variables
 *---------------------------------------------------------------------------*/
volatile uint32_t g_msTicks;          /* Variable to store millisecond ticks */
volatile uint32_t g_ledSet = 0;       /* Variable to store virtual LED value */

/*----------------------------------------------------------------------------
  SysTick_Handler
 *---------------------------------------------------------------------------*/
void SysTick_Handler(void) {
  g_msTicks++;
}

/*----------------------------------------------------------------------------
  delays number of tick Systicks (happens every 1 ms)
 *---------------------------------------------------------------------------*/
void Delay (uint32_t dlyTicks) {                                              
  uint32_t curTicks;

  curTicks = g_msTicks;
  while ((g_msTicks - curTicks) < dlyTicks) {
  }
}

/*----------------------------------------------------------------------------
  main function
 *---------------------------------------------------------------------------*/
int main(void) {
  /* Initialize system core clock */
  SystemCoreClockUpdate();

  /* Configure SysTick to generate an interrupt every millisecond */
  SysTick_Config(SystemCoreClock / 1000U);
  
  while (1) {
    /* Delay 1000 ms */
    Delay(1000U);
    /* Invert virtual LED value */
    if (g_ledSet) {
      g_ledSet = 0;
    }
    else {
      g_ledSet = 1;
    }
  }
}
