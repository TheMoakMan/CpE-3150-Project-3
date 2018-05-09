#ifndef __JACQUES_H__
#define __JACQUES_H__

float multiplier = 1; // Multiplier to transpose by

void change_tempo(void);

void transpose(void);
void transpose_up(void);
void transpose_down(void);

/*
 * Transmits a string over the serial port
 * pre: st - character array to be transmitted
 * post: Sends string to serial port
  */
void transmit(char * st);

#endif