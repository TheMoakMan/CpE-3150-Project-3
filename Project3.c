#include "Project3.h"
void makeSong(Note song[], NoteName notes[], Rhythm rhyth[], short size);

NoteName songNotes[] = {E4, F4, G4, A3, Bb3};
Rhythm songRhyth[] = {Whole, Half, Quarter, Eighth, Sixteenth};
Note song[5];	 

void main(void)
{  	
	P1M1 = 0;
	c.name = C1;
	c.value = Quarter;
  		
  makeSong(song, songNotes, songRhyth, 5);	
	
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
		if(!P2^0)
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
	static short i = 0;
	if(i <= 5){
  TH0 = song[i].name >> 8;
	TH0 = song[i].name;
	spkr = ~spkr;
	TF0 = 0;
	TR0 = 1;
	
  i++;
  }
}

void makeSong(Note song[], NoteName notes[], Rhythm rhyth[], short size)
{
	short i;
	for(i = 0; i < size; i++)
	{
		song[i].name = notes[i];
		song[i].value = rhyth[i];
  }
}















