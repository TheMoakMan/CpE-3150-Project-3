#include "frequency.h"
short frequency(Note note, short octave)
{
	short value;
	
	
	value = freq_values[note.name - 65];
	value = note.accidential;
	if (octave < 0)
		value = value / (octave * -1);
	if (octave > 1)
		value = value * octave;
	
	return value;
}