#ifndef __FREQUENCY_H__
#define __FREQUENCY_H__

/*
 * Mapping of note names, octaves and 
 * 16 bit Timer preload values for P89LPC932A1
 */
typedef enum
{
	B0	=		5095,		// 5 string bass FTW!!!
	C1 	= 	7935,		// James Brown  (I feel good!)
	Db1 =  	11323,	// Laying it down
	D1 	= 	14335,	// Dirty grooves
	Eb1 =  	17030,	// The funky starts here
	E1 	= 	20579,
	F01 = 	22670,
	Gb1 =  	25466,
	G1 	= 	27919,
	Ab1 =  	29394,
	A1 	= 	32023,
	Bb1 =  	-31780,
	B1 	= 	-30217,
	C2 	= 	-28357,
	Db2 =  	-26713,
	D2 	= 	-25250,
	Eb2 =  	-23938,
	E2 	= 	-22478,
	F2 	= 	-21186,
	Gb2 =  	-20035,
	G2 	= 	-18808,
	Ab2 =  	-17895,
	A2 	= 	-16756,
	Bb2 =  	-15890,
	B2 	= 	-14985,
	C3 	= 	-14178,
	Db3 =  	-13356,
	D3 	= 	-12625,
	Eb3 =  	-11891,
	E3 	= 	-11239,
	F3 	= 	-10593,
	Gb3 =  	-9963,
	G3 	= 	-9404,
	Ab3 =  	-8904,
	A3 	= 	-8378,
	Bb3 =  	-7910,
	B3 	= 	-7492,
	C4 	= 	-7062,
	Db4 =  	-6654,
	D4 	= 	-6290,
	Eb4 =  	-5926,
	E4 	= 	-5602,
	F4 	= 	-5281,
	Gb4 =  	-4995,
	G4 	= 	-4702,
	Ab4 =  	-4441,
	A4 	=  	-4189,
	Bb4 =  	-3955,
	B4 	=  	-3738,
	C5 	=  	-3524,
	Db5 =  	-3327,
	D5 	=  	-3140,
	Eb5 =  	-2963,
	E5 	=  	-2797,
	F5 	=  	-2640,
	Gb5 =  	-2490,
	G5 	=  	-2351,
	A5 	=		-2094,
	Z = 0 					// Rest
} NoteName;

/* 
 * Rhythmic values for a note
 * The number represent the dominator of the rhythmic 
 * value (i.e. 8 => 1/8 => Eighth note
 */
typedef enum 
{
	Whole 							= 1,
	Half 								= 2,
	Quarter 						= 4,
	Eighth							= 8,
	Sixteenth 					= 16,
	Dotted_Quarter 			= 17
} Rhythm;

/*
 * Construct representing a musical note on the staff
 * name: note name from the NoteName to be converted to a freqency
 * value: The rhythmic value of the note as defined in the Rhythm enum
 */
typedef struct
{
	NoteName name;
	Rhythm value;
} Note;


#endif