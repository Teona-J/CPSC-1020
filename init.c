/* Teona Johnson
	03/26/2024
	001
	Lab 9
	contains initArray function
 */

// intializes the array
// gets: characters for array
//return: nothing

#include "defs.h"

void initPizzas(pizza_t pizzaArray[], int size)	{
	int length1;
			

		for ( int i = 0; i < size; i++)	{
			fgets(pizzaArray[i].pizzaName, NAME_LENGTH, stdin);

			length1 = strlen(pizzaArray[i].pizzaName);
			

			if (pizzaArray[i].pizzaName[length1 - 1] == '\n')	
				pizzaArray[i].pizzaName[length1 -1] = '\0';

			fgets(pizzaArray[i].ingredients, INGREDIENTS_LENGTH, stdin);

			length1 = strlen(pizzaArray[i].ingredients);

			if (pizzaArray[i].ingredients[length1 - 1] == '\n')
				pizzaArray[i].ingredients[length1 -1] = '\0';
		}
 
}
