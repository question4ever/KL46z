#include "MKL46Z4.h"

int main(void)
{
  SystemInit();
  SIM->SCGC5 |= SIM_SCGC5_PORTE_MASK;
  PORTE->PCR[29] |= PORT_PCR_MUX(0x01);
  PTE->PDDR |= (1<<29);
  while(1)
  {
    for(int i = 0; i < 500000; i++)
    {
    }
    PTE->PTOR |= (1<<29);
  }
	return 0;
}
