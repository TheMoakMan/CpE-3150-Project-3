#ifndef __FREQUENCY_H__
#define __FREQUENCY_H__
enum Accidental 
{
	Flat = -1,
	Natural = 0,
	Sharp = 1
};

enum Rhythm
{
	Whole = 1,
	Half = 2,
	Quarter = 4,
	Eighth = 8
};

struct Note
{
	char name;
	enum Rhythm value;
	enum Accidental accidential;
	
};
int freq_values[8] = { 440, 493, 523, 587, 659, 698, 784 };

int frequency(char note_name, int octave);
#endif