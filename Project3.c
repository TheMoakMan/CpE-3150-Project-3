#include "Project3.h"
void main(void)
{
	Note xdata Song_1[10];
	Note xdata Song_2[10];
	bit my_button;
	short pressed = 0;
	short i = 0;
	short j;
	void (* handlers[6])(void);
  while(1) 
	{
		for (i = 0; i < 6; i ++)
		{
			switch (i)
			{
				case 0:
					my_button = P2^0;
					break;
				case 1: 
					my_button = P0^1;
					break;
				case 2: 
					my_button = P2^3;
					break;
				case 3: 
					my_button = P0^2;
					break;
				case 4:
					my_button = P1^4;
					break;					
				case 5:
					my_button = P0^0;
					break;
			}
		}
		
		if (my_button == 0 && pressed >> i == 0) // Check if was pressed this iteration
		{
			j = 1; 
			j = j << i;
			pressed = pressed | j;
			handlers[i];
		}
		
		else if (my_button == 1) // Check button released
		{
			j = pressed - i - 1;
			pressed = pressed & j;
		}
		
  }  
}
