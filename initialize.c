/* Teona Johnson
	03/12/2024
	001
	Lab 8
	contains initArray function
*/

// intializes the array
// gets: characters for array
//return: nothing

#include "defs.h"

void initArray(char theArray[][MAX_LENGTH])	{

	for ( int i = 0; i < NUM_LINES; i++)	{
		fgets( theArray[i], MAX_LENGTH, stdin);
	}

}
