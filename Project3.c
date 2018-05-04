#include "Project3.h"

void main(void)
{

  while(1) 
	{
		if(P2^0 == 0)
		{
			wait(P2^0);
		}
		else if(P0^1 == 0)
		{
			wait(P0^1);
		}
		else if(P2^3 == 0)
		{
			wait(P2^3);
		}
		else if(P0^2 == 0)
		{
			wait(P0^2);
		}
		else if(P1^4 == 0)
		{
			wait(P1^4);
		}
		else if(P0^0 == 0)
		{
			wait(P0^0);
		}
  }  
}

void wait(bit my_button)
{
	while(my_button == 0);
}

void TO_ISR(void) interrupt 1
{
}
