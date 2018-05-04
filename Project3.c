#include "Project3.h"

void main(void)
{
		
  TMOD = 0x01;  //Timer 0 Mode 1
  IE = 0x9A;    //Enbles Serial, Timer 0 and timer 1 Interrupts	
	PCON = 0x00;  //Set SMOD1 = 0, SMOD0 = 0;
	SCON = 0x50;  //REN = 1, Serial Mode 8-bit Variable UART
	
	tempo = 1;
	
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
void play_song(short index)
{
  note_ptr = songs[index];
	current  = index;
	
	update_song();
}

void wait(bit my_button)
{
	while(my_button == 0); 
}

void update_song(void)
{
		
	
	
}

void T0_ISR(void) interrupt 1
{
	update_song();
}


