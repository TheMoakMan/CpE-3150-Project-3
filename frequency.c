#include "frequency.h"
short frequency(char note_name, short octave)
{
	short value;
	
	
	value = freq_values[note_name - 65];
	if (octave < 0)
		value = value / (octave * -1);
	if (octave > 1)
		value = value * octave;
	
	return value;
}