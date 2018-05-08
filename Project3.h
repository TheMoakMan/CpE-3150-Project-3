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

sbit sw1 = P2^0;
sbit sw2 = P0^1;
sbit sw3 = P2^3;
sbit sw4 = P0^2;
sbit sw5 = P1^4;
sbit sw6 = P0^0;
sbit sw7 = P2^1;
sbit sw8 = P0^3;
sbit sw9 = P2^2;

//seven segment display
sbit segA = P1^0;
sbit segB = P1^1;
sbit segC = P1^2;
sbit segD = P1^3;
sbit segE = P2^1;
sbit segF = P0^3;
sbit sebG = P2^2;
sbit DP = P1^5;
/*
 * Plays a pre-recorded song
 * index - index of song to be played
 * pre: index must be within bounds of songs array
 * post: Starts timer 0 and initiates playback of a song on the speaker
 */
void play_song(short index);
#endif