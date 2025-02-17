/* Teona Johnson
	04/02/2024
	001
	Lab 10
	contains printPizza
 */

#include "defs.h"

// prints pizza menue
//gets: pointer to pizza struct, number of pizzas
//retuns: nothing

void printPizza(pizza_t *pizzaArray, int size)	{
	printf("\n\n%25s", "PIZZA MENU");
	printf("\n\n%-20sIngredients\n", "Pizza");
	printf("----------------------------------------------------\n\n");
	for (int i = 0; i < size; i++)	{
		printf("%-20s%-70s\n", (pizzaArray + i)->pizzaName, (pizzaArray + i)->ingredients);
	}

	printf("\n\n");
}
