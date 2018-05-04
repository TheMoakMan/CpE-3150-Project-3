#include "Project3.h"

void main(void)
{
	Note xdata Song_1[10];
	Note xdata Song_2[10];
	bit my_button;                     
	short pressed = 0;              //"Boolean" Statement for if button is pressed
	short i = 0;                       
	short j;
	void (* handlers[6])(void);
  while(1) 
	{
		if(P2^0 == 0)
			handlers[0];
		else if(P0^1 == 0)
			handlers[1];
		else if(P2^3 == 0)
			handlers[2];
		else if(P0^2 == 0)
			handlers[3];
		else if(P1^4 == 0)
			handlers[4];
		else if(P0^0 == 0)
			handlers[5];
			
		/*
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
			
		
   */		
  }  
}
