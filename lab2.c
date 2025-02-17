/* Teona Johnson
	01/30/2024
	001
	Lab2
	errors.c
	Students will copy over this file and fix the errors and warnings.
	When compiled, this should produce 7 errors and 5 warnings.	
*/

#include <stdio.h>
#include <math.h>

int main (void) {
	int numPeriods;
	const double interestRate = 7;
	double principal;
	// 1. Missing a comma
	double SI, CI;  // simple interest and compound interest


	// get user input for the loan amount and the term of the loan
	// 2. Should be a semicolon
	printf("\n\nEnter the loan amount: ");
	// 3. Missing a parenthesis
	scanf("%lf", &principal);

	printf("Enter the loan term (number of periods): ");
	// 4. Missing an ampersand
	scanf("%d", &numPeriods);

	// calculate simple and compound interest and show results
	// simple interest = principal * interest rate * number of periods
	// 5. Missing semicolon
	SI = principal * (interestRate / 100) * numPeriods;
	// 6. Should be a quotation mark
	printf("\n\nSI is: %.2lf\n", SI);

	// compund interest = 
	//		principal * (1 + interest rate)^number of periods - principal
	CI = principal * pow((1 + interestRate/100), numPeriods) - principal;
	// 7. Missing agrument
	printf("CI is: %.2lf\n\n", CI);

	return 0;
}



