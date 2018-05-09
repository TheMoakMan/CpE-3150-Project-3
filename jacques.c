#include "jacques.h"
void transpose(bit up)
{
    float root = 1.05946309436;
    if (up)
    {
        
    }
}

void transmit(char * st)
{
	short x = 0;
	while (st[x] != '\0') // Keep sending characters until we hit null terminator
	{
		uart_transmit(st[x]);
		x++;	
	}
}

void change_tempo(void)
{
	if (tempo == 125)
	{
		tempo = tempo / 2;
		transmit("Tempo is at 120 bpm");
	}
	
	else if (tempo == 62)
	{
		tempo = tempo / 2;
		transmit("Tempo is at 240 bpm");
	}
	
	else 
	{
		tempo = 125;
		transmit("Tempo is reset to 60 bpm");
	}
}