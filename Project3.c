#include "Project3.h"

void main(void)
{
		 
	Note song1[16];
	Note song2[15];
	
	// Another one bites the dust
	song1[0].name = A2;
	song1[0].value = Sixteenth;
	song1[1].name = G2;
	song1[1].value = Sixteenth;
	song1[2].name = E1;
	song1[2].value = Eighth;
	song1[3].name = Z;
	song1[3].value = Eighth;
	song1[4].name = E1;
	song1[4].value = Eighth;
	song1[5].name = Z;
	song1[5].value = Eighth;
	song1[6].name = E1;
	song1[6].value = Eighth;
	song1[7].name = Z;
	song1[7].value = Quarter;
	song1[8].name = E1;
	song1[8].value = Eighth;
	song1[9].name = E1;
	song1[9].value = Eighth;
	song1[10].name = E1;
	song1[10].value = Eighth;
	song1[11].name = E1;
	song1[11].value = Eighth;
	song1[12].name = G1;
	song1[12].value = Eighth;
	song1[13].name = E1;
	song1[13].value = Sixteenth;
	song1[14].name = A1;
	song1[14].value = Sixteenth;
	song1[15].name = Z;
	song1[15].value = Half;
	
	songs[0] = song1;
	lengths[0] = 16;
	
	P1M1 = 0;
	c.name = C5;
	c.value = Quarter;
	TMOD = 0x01;  //Timer 0 Mode 1
  IEN0 = 0x9A;    //Enbles Serial, Timer 0 and timer 1 Interrupts	
	PCON = 0x00;  //Set SMOD1 = 0, SMOD0 = 0;
	SCON = 0x50;  //REN = 1, Serial Mode 8-bit Variable UART
	tempo = 1;
	tempo = tempo * 4; // Sixteenth notes per second
	TF0 = 1;
	

	
	while(1);
  /*while(1) 
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
		
	

  }  */
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
		
	current_sixteenth++;
	if (current_sixteenth > (16 / (* note_ptr).value))
	{
		note_ptr++;
		current_sixteenth = 0;
	}
	if (note_ptr == (songs[current] + lengths[current] * sizeof(Note)))
	{
		current_sixteenth = 0; // Stop playback
	}
	else
	{
		;// Reload timer and go again
	}
	
}

void T0_ISR(void) interrupt 1
{
	TL0 = c.name;
	TH0 = c.name >> 8;
	spkr = ~spkr;
	TF0 = 0;
	TR0 = 1;
	
}




