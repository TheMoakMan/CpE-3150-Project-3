#include "Project3.h"
void main(void)
{
		 
	Note xdata song1[15];
	Note xdata song2[34];
	char songTitle1[28] = {"Another One Bites The Dust\n\r"};		//\n\r goes to beginning of next line
	char songTitle2[22] = {"Final Jeopardy Theme\n\r"};
	
	char k = 0; //counter for for-loop
	
	keyboard_mode = 0;
	
	// Another one bites the dust
	song1[0].name = A3;
	song1[0].value = Sixteenth;
	song1[0].letter = 'A';
	song1[1].name = G3;
	song1[1].value = Sixteenth;
	song1[1].letter = 'G';
	song1[2].name = E2;
	song1[2].value = Eighth;
	song1[2].letter = 'E';
	song1[3].name = Z;
	song1[3].value = Eighth;
	song1[3].letter = 'Z';
	song1[4].name = E2;
	song1[4].value = Eighth;
	song1[4].letter = 'E';
	song1[5].name = Z;
	song1[5].value = Eighth;
	song1[5].letter = 'Z';
	song1[6].name = E2;
	song1[6].value = Eighth;
	song1[6].letter = 'E';
	song1[7].name = Z;
	song1[7].value = Quarter;
	song1[7].letter = 'Z';
	song1[8].name = E2;
	song1[8].value = Eighth;
	song1[8].letter = 'E';
	song1[9].name = E2;
	song1[9].value = Eighth;
	song1[9].letter = 'E';
	song1[10].name = E2;
	song1[10].value = Eighth;
	song1[10].letter = 'E';
	song1[11].name = G2;
	song1[11].value = Eighth;
	song1[11].letter = 'G';
	song1[12].name = E2;
	song1[12].value = Sixteenth;
	song1[12].letter = 'E';
	song1[13].name = A2;
	song1[13].value = Eighth;
	song1[13].letter = 'A';
	song1[14].name = Z;
	song1[14].value = Half;
	song1[14].letter = 'Z';
	
	songs[0] = song1;
	lengths[0] = 15;
	
	song2[0].name = C5;
	song2[0].value = Quarter;
	song2[0].letter = 'C';
	song2[1].name = F5;
	song2[1].value = Quarter;
	song2[1].letter = 'F';
	song2[2].name = C5;
	song2[2].value = Quarter;
	song2[2].letter = 'C';
	song2[3].name = F4;
	song2[3].value = Eighth;
	song2[3].letter = 'F';
	song2[4].name = F4;
	song2[4].value = Eighth;
	song2[4].letter = 'F';
	song2[5].name = C5;
	song2[5].value = Quarter;
	song2[5].letter = 'C';
	song2[6].name = F5;
	song2[6].value = Quarter;
	song2[6].letter = 'F';
	song2[7].name = C5;
	song2[7].value = Half;
	song2[7].letter = 'C';
	song2[8].name = C5;
	song2[8].value = Quarter;
	song2[8].letter = 'C';
	song2[9].name = F5;
	song2[9].value = Quarter;
	song2[9].letter = 'F';
	song2[10].name = C5;
	song2[10].value = Quarter;
	song2[10].letter = 'C';
	song2[11].name = F5;
	song2[11].value = Quarter;
	song2[11].letter = 'F';
	song2[12].name = A5;
	song2[12].value = Dotted_Quarter;
	song2[12].letter = 'A';
	song2[13].name = G5;
	song2[13].value = Eighth;
	song2[13].letter = 'G';
	song2[14].name = F5;
	song2[14].value = Eighth;
	song2[14].letter = 'F';
	song2[15].name = E5;
	song2[15].value = Eighth;
	song2[15].letter = 'E';
	song2[16].name = D5;
	song2[16].value = Eighth;
	song2[16].letter = 'D';
	song2[17].name = Db5;
	song2[17].value = Eighth;
	song2[17].letter = 'D';
	song2[18].name = C5;
	song2[18].value = Quarter;
	song2[18].letter = 'C';
	song2[19].name = F5;
	song2[19].value = Quarter;
	song2[19].letter = 'F';
	song2[20].name = C5;
	song2[20].value = Quarter;
	song2[20].letter = 'C';
	song2[21].name = F4;
	song2[21].value = Eighth;
	song2[21].letter = 'F';
	song2[22].name = F4;
	song2[22].value = Eighth;
	song2[22].letter = 'F';
	song2[23].name = C5;
	song2[23].value = Quarter;
	song2[23].letter = 'C';
	song2[24].name = F5;
	song2[24].value = Quarter;
	song2[24].letter = 'F';
	song2[25].name = C5;
	song2[25].value = Half;
	song2[25].letter = 'C';
	song2[26].name = F5;
	song2[26].value = Dotted_Quarter;
	song2[26].letter = 'F';
	song2[27].name = D5;
	song2[27].value = Eighth;
	song2[27].letter = 'D';
	song2[28].name = C5;
	song2[28].value = Quarter;
	song2[28].letter = 'C';
	song2[29].name = Bb4;
	song2[29].value = Quarter;
	song2[29].letter = 'B';
	song2[30].name = A4;
	song2[30].value = Quarter;
	song2[30].letter = 'A';
	song2[31].name = G4;
	song2[31].value = Quarter;
	song2[31].letter = 'G';
	song2[32].name = F4;
	song2[32].value = Quarter;
	song2[32].letter = 'F';
	song2[33].name = Z;
	song2[33].value = Half;
	song2[33].letter = 'Z';
	songs[1] = song2;
	lengths[1] = 34;
	
	TMOD = 0x11;  //Timer 0 Mode 1
  IEN0 = 0x9A;    //Enbles Serial, Timer 0 and timer 1 Interrupts	
	PCON = 0x00;  //Set SMOD1 = 0, SMOD0 = 0;
	SCON = 0x50;  //REN = 1, Serial Mode 8-bit Variable UART
	PT1	 = 1;
	tempo = 125;
	current_song = 255;
	P0M1 = 0;
	P1M1 = 0;
	P2M1 = 0;
	
	uart_init();
	
  while(1) 
	{
		if (sw1 == 0)
		{
			play_song(0);
			for(k = 0; k < 28; k++)  //loop through title array to display name
			{
				uart_transmit(songTitle1[k]);
			}
			while(sw1 == 0);
		}
		else if (sw2 == 0)
		{
			play_song(1);
			for(k = 0; k < 22; k++) 
			{
				uart_transmit(songTitle2[k]);
			}
			while(sw2 == 0);
		}
		else if (sw3 == 0)
		{
			display('A');
			while(sw3 == 0);
		}
		else if (sw4 == 0)
		{
			//play_song(0);
			while(sw4 == 0);
		}
		else if (sw5 == 0)
		{
			//play_song(0);
			while(sw5 == 0);
		}
		else if (sw6 == 0)
		{
			//play_song(0);
			while(sw6 == 0);
		}
		else if (sw7 == 0)
		{
			//play_song(0);
		}
		else if (sw8 == 0)
		{
			//play_song(0);
		}
		else if (sw9 == 0)
		{
			//play_song(0);
		}
  }
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
	int delay = 3687 * 2;
	if (song_pos < lengths[current_song])
	{
		if (note_value == 0)
		{
			while(delay > 0)
				delay--;
			current_note = songs[current_song][song_pos++];
			display(current_note.letter);
			if (current_note.value != 17)
				note_value = (16 / current_note.value) * (tempo);
			else
				note_value = 6 * (tempo);
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

void display(char letter) 
{
	switch (letter)
	{
		case 'A':
			segE = 0;
			segF = 0;
			segA = 0;
			segB = 0;
			segC = 0;
			segG = 0;
			segD = 1;
			break;
		case 'B':
			segE = 0;
			segF = 0;
			segC = 0;
			segG = 0;
			segD = 0;
			segA = 1;
			segB = 1;
			break;
		case 'C':
			segE = 0;
			segF = 0;
			segC = 1;
			segG = 1;
			segD = 0;
			segA = 0;
			segB = 1;
			break;
		case 'D':
			segA = 1;
			segB = 0;
			segC = 0;
			segD = 0;
			segE = 0;
			segF = 1;
			segG = 0;
			break;
		case 'E':
			segA = 0;
			segB = 1;
			segC = 1;
			segD = 0;
			segE = 0;
			segF = 0;
			segG = 0;
			break;
		case 'F':
			segA = 0;
			segB = 1;
			segC = 1;
			segD = 1;
			segE = 0;
			segF = 0;
			segG = 0;
			break;
		case 'G':
			segA = 0;
			segB = 1;
			segC = 0;
			segD = 0;
			segE = 0;
			segF = 0;
			segG = 1;
			break;
		default:
			segA = 1;
			segB = 1;
			segC = 1;
			segD = 1;
			segE = 1;
			segF = 1;
			segG = 1;
	}
}