/* Teona Johnson
	04/02/2024
	001
	Lab 10
	contains initArray function
 */

// intializes the array
// gets: pointer to array, number of pizzas, pointer to file
//return: nothing

#include "defs.h"

void initPizzas(pizza_t *pizzaArray, int size, FILE *inputFile)	{
	int length1;
			

		for ( int i = 0; i < size; i++)	{
			fgets((pizzaArray + i)->pizzaName, NAME_LENGTH, inputFile);

			length1 = strlen((pizzaArray + i)->pizzaName);
			

			if ((pizzaArray + i)->pizzaName[length1 - 1] == '\n')	
				(pizzaArray + i)->pizzaName[length1 -1] = '\0';
			
		//	printf("%s\n", (pizzaArray + i)->pizzaName);

			fgets((pizzaArray + i)->ingredients, INGREDIENTS_LENGTH, inputFile);

			length1 = strlen((pizzaArray + i)->ingredients);

			if ((pizzaArray + i)->ingredients[length1 - 1] == '\n')
				(pizzaArray + i)->ingredients[length1 -1] = '\0';

		//	printf("%s\n", (pizzaArray + i)->ingredients);
		}
 
}
