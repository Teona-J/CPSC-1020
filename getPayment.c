/* Teona Johnson
	03/12/2024
	001
	Lab 8
	Get payment function
*/

//calculates monthly payment
//gets: user input loan amount, intrest rate, term
//return: monthly payment

#include "defs.h"

double getMonthlyPmt()	{

	int loanAmt;
	double intRate;
	int term;
	double monthlyPmnt;
	double total;
	double totalInt;

		printf("\nEnter the loan amount:  ");
		scanf("%d", &loanAmt);

		printf("Interest rate:  ");
		scanf("%lf", &intRate);
		
		printf("Term of loan (number of months):  ");
		scanf("%d", &term);
		
		intRate = intRate / 100;

		monthlyPmnt = loanAmt * (intRate / 12) / ( 1 - pow (1 + intRate/12, -term));
		printf("\n\nYour monthly payment will be: $%.2lf.", monthlyPmnt);

		total = monthlyPmnt * term;
		totalInt = total - loanAmt;

		printf("\n\nAt the end of the loan, you will have paid $%.2lf\nin interest for a total of $%.2lf.", totalInt, total);
		
		printf("\n\n");


			
	return monthlyPmnt; 
}


