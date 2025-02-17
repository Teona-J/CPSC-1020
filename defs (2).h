/*  Teona Johnson
	03/26/2024
	001
	Lab 9
	Pizza program header file
*/

#ifndef DEFS_H
#define DEFS_H

#include <stdio.h>
#include <string.h>

#define NAME_LENGTH 20
#define INGREDIENTS_LENGTH 70


typedef struct pizza {
	char pizzaName[NAME_LENGTH];
	char ingredients[INGREDIENTS_LENGTH];
} pizza_t;

void initPizzas(pizza_t pizzaArray[], int size);
void printPizza(pizza_t pizzaArray[], int size);
#endif
