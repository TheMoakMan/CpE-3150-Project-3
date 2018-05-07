#include "Project3.h"
void main(void)
{
		 
	Note xdata song1[15];
	Note xdata song2[15];
	
	keyboard_mode = 0;
	
	// Another one bites the dust
	song1[0].name = A3;
	song1[0].value = Sixteenth;
	song1[1].name = G3;
	song1[1].value = Sixteenth;
	song1[2].name = E2;
	song1[2].value = Eighth;
	song1[3].name = Z;
	song1[3].value = Eighth;
	song1[4].name = E2;
	song1[4].value = Eighth;
	song1[5].name = Z;
	song1[5].value = Eighth;
	song1[6].name = E2;
	song1[6].value = Eighth;
	song1[7].name = Z;
	song1[7].value = Quarter;
	song1[8].name = E2;
	song1[8].value = Eighth;
	song1[9].name = E2;
	song1[9].value = Eighth;
	song1[10].name = E2;
	song1[10].value = Eighth;
	song1[11].name = G2;
	song1[11].value = Eighth;
	song1[12].name = E2;
	song1[12].value = Sixteenth;
	song1[13].name = A2;
	song1[13].value = Eighth;
	song1[14].name = Z;
	song1[14].value = Half;
	
	songs[0] = song1;
	lengths[0] = 16;
	
	TMOD = 0x11;  //Timer 0 Mode 1
  IEN0 = 0x9A;    //Enbles Serial, Timer 0 and timer 1 Interrupts	
	PCON = 0x00;  //Set SMOD1 = 0, SMOD0 = 0;
	SCON = 0x50;  //REN = 1, Serial Mode 8-bit Variable UART
	PT1	 = 1;
	tempo = 125;
	current_song = 255;
	P1M1 = 0;
	
	play_song(0);
	
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

void wait(bit my_button)
{
	while(my_button == 0); 
}

void play_song(int index)
{
	current_song = index;
	song_pos = 0;
	TF1 = 1;
}

void T0_ISR(void) interrupt 1
{



	// Make sound if song is playing and we aren't resting or keyboard is engaged
	if ((current_song < 255 && current_note.name != 0) || keyboard_mode)
	{
		TH0 = current_note.name >> 8;
		TL0 = current_note.name;
		spkr = ~spkr;
		TF0 = 0;
		TR0 = 1;
		
	}
}

void T1_ISR(void) interrupt 3
{
	static int note_value = 0;
	if (song_pos < lengths[0])
	{
		if (note_value == 0)
		{
			current_note = songs[0][song_pos++];
			note_value = (16 / current_note.value) * (tempo);
		}
		note_value --;
		TH1 = -3687 >> 8; // Instruction cycles per ms
		TL1 = -3687;
		TF1 = 0;
		TR1 = 1;
		if (TF0 == 0 && TR0 == 0)
			TF0 = 1;
		
	}
	else 
	{
		current_song = 255; // Stop playback
		song_pos = 0;
		note_value = 0;
		TR1 = 0;
	}
}













