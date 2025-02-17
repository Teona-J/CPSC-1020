/* Teona Johnson
	04/02/2024
	001
	Lab 10
	main function for Pizza program
 */

#include "defs.h"

int main (int argc, char *argv[])	{

//validate number of arguments
	if (argc < 2)	{
		fprintf(stderr, "ERROR: forgot to provide the input file name\n");
		exit(1);
	}

	FILE *inFile = NULL;
	inFile = fopen(argv[1], "r");

//validate input file
	if (inFile == NULL)	{
		fprintf(stderr, "ERROR: file does not exist\n");
		exit(2);
	}

	int numPizzas;

	fscanf(inFile, "%d\n", &numPizzas);
	
	getchar();

	pizza_t *pizzaMenue = (pizza_t*) malloc(numPizzas * sizeof(pizza_t));

	initPizzas(pizzaMenue, numPizzas, inFile);

	printPizza(pizzaMenue, numPizzas);

	free(pizzaMenue);
	fclose(inFile);
	

	return 0;
}
