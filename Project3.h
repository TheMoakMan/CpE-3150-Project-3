#ifndef __PROJECT_3_H__
#define __PROJECT_3_H__
#include <reg932.h>
#include "uart.h"
#include "frequency.h"
Note * xdata songs[2]; 	// Pre-recorded songs to be played back
short lengths[2]; 			// Number of notes in each pre-recorded song
Note * note_ptr; 				// Current note being played back
short current_song; 		// Current song being played back
short tempo;    				// Milliseconds per sixteenth note
sbit spkr = P1^7; 			// Pin for the speaker
short song_pos;					// Position in current song
Note current_note; 	// Current note being played
bit keyboard_mode;				// Being used as a keyboard
NoteName key_note;       //Current note being played by the keyboard
NoteName keys[3];       //All notes bound to the keyboard.
NoteName octave_keys[5][7] = { {C1, D1, E1, F01, G1, A1, B1},
                               {C2, D2, E2, F2, G2, A2, B2},
															 {C3, D3, E3, F3, G3, A3, B3},
															 {C4, D4, E4, F4, G4, A4, B4},
															 {C5, D5, E5, F5, G5, A5, B5}};
char noteDisplays[7] = {'A', 'B', 'C', 'D', 'E', 'F', 'G'};
															 

sbit sw1 = P2^0;
sbit sw2 = P0^1;
sbit sw3 = P2^3;
sbit sw4 = P0^2;
sbit sw5 = P1^4;
sbit sw6 = P0^0;
sbit sw7 = P2^1;
sbit sw8 = P0^3;
sbit sw9 = P2^2;
sbit led1 =
sbit led2 =
sbit led3 =
sbit led4 =
sbit led5 = 
sbit led6 =
sbit led7 =
sbit led8 =
sbit led9 =


//seven segment display
sbit segA = P1^0;
sbit segB = P1^4;
sbit segC = P1^2;
sbit segD = P1^3;
sbit segE = P2^1;
sbit segF = P0^3;
sbit segG = P2^2;
sbit DP = P1^5;
/*
 * Plays a pre-recorded song
 * index - index of song to be played
 * pre: index must be within bounds of songs array
 * post: Starts timer 0 and initiates playback of a song on the speaker
 */
void play_song(short index);

/*
 * Displays a letter to the 7 segment display
 * pre: letter must be between A and G
 * post: Writes the letter to the 7 segment display by sending 0 to the pins
 */
void display(char letter);


/*
 * Changes the button inputs to play songs coded into memory.
 *
 *
 */
void songMode();

void keyBind();

NoteName noteSelect();

char get_octave();

#endif