#include <stdint.h>

extern volatile uint32_t g_msTicks;
extern volatile uint32_t g_ledSet;

void SysTick_Handler(void);
void Delay (uint32_t dlyTicks);
