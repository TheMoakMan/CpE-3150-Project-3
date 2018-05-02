#include "frequency.h"
int frequency(char note_name, int octave)
{
	int value;
	int freq_values[8] = { 440, 493, 523, 587, 659, 698, 784 };
	
	value = freq_values[note_name - 65];
	if (octave < 0)
		value = value / (octave * -1);
	if (octave > 1)
		value = value * octave;
	
	return value;
}