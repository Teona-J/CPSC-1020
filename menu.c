/* Teona Johnson
	03/28/2024
	001
	Lab 9
	contains initPizzas 
 */

#include "defs.h"

// prints pizza menue
//gets: pizza struct, number of pizzas
//retunr: nothing

void printPizza(pizza_t pizzaArray[], int size)	{
	printf("\n\n%25s", "PIZZA MENU");
	printf("\n\n%-20sIngredients\n", "Pizza");
	printf("----------------------------------------------------\n\n");
	for (int i = 0; i < size; i++)	{
		printf("%-20s%-70s\n", pizzaArray[i].pizzaName, pizzaArray[i].ingredients);
	}

	printf("\n\n");
}
