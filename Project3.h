#ifndef __PROJECT_3_H__
#define __PROJECT_3_H__
#include <reg932.h>
#include "uart.h"
#include "frequency.h"
Note * xdata songs[2]; 	// Pre-recorded songs to be played back
short lengths[2]; 			// Number of notes in each pre-recorded song
Note * note_ptr; 				// Current note being played back
short current; 					// Current song being played back
short tempo;    				// Beats per second 
sbit spkr = P2^4; 							// Pin for the speaker
short current_sixteenth;// Current beat of the current note
Note c;
/*
 * Pauses execution until button is released
 * my_button - button being queried for active low state
 * pre: my_button must map to a bit location of a switch on Simon board
 * post: pauses execution
 */
void wait(bit my_button);

/*
 * Plays a pre-recorded song
 * index - index of song to be played
 * pre: index must be within bounds of songs array
 * post: Starts timer 0 and initiates playback of a song on the speaker
 */
void play_song(short index);

/*
 * Timer 0 interrupt service request handler
 * called by the Timer 0 Interrupt service routine
 * post: responds to the timer rollover, advances note_ptr, and reloads timer
 */
void update_song(void);
#endif