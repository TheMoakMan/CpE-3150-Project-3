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

int frequency(char note_name, int octave);
#endif