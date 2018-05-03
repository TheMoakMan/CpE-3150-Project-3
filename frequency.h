#ifndef __FREQUENCY_H__
#define __FREQUENCY_H__
typedef enum 
{
	Flat = 0.94,
	Natural = 1,
	Sharp = 1.06,
} Accidental;

typedef enum 
{
	Whole = 1,
	Half = 2,
	Quarter = 4,
	Eighth = 8
} Rhythm;

typedef struct 
{
	char name;
	Rhythm value;
	Accidental accidential;
	short octave;
} Note;
short freq_values[] = { 440, 493, 523, 587, 659, 698, 784 };

short frequency(Note note, short octave);
#endif