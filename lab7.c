/* Teona Johnson
	03/05/2024
	001
	Lab 7
	Car loan calculator with functions
*/

#include <stdio.h>
#include <math.h>
#define NUM_LINES 3
#define MAX_LENGTH 95

void initArray(char theArray[][MAX_LENGTH]);
double getMonthlyPmt();
void printAffordability(char theArray[][MAX_LENGTH],
double monthlyPayment, int monthlySalary);

int main ()	{
	int pay;
	int goAgain;
	double owedMonth;
	char afford[NUM_LINES][MAX_LENGTH];

	initArray(afford);
	//	freopen("/dev/tty", "rw", stdin);

	
	printf("CAR LOAN CALCULATOR");
	printf("\n\nWhat is your monthly take-home pay?  ");
	scanf("%d", &pay);
	goAgain = 1;


	while (goAgain == 1)	{
		
		owedMonth = getMonthlyPmt();
		printf("\n\n");

		printAffordability(afford, owedMonth, pay);

		printf("\n\nWould you like to try again? 0 for no, 1 for yes: ");
		scanf("%d", &goAgain);

		while ( goAgain != 1 && goAgain != 0)	{
			printf("Would you like to try again? 0 for no, 1 for yes: ");
			scanf("%d", &goAgain);
		}
	}
		

	return 0;
}

// intializes the array
// gets: characters for array
//return: nothing
void initArray(char theArray[][MAX_LENGTH])	{

	for ( int i = 0; i < NUM_LINES; i++)	{
		fgets( theArray[i], MAX_LENGTH, stdin);
	}

}

//calculates monthly payment
//gets: user input loan amount, intrest rate, term
//return: monthly payment
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

// prints affordability statements
//gets: array, monthly payment and monthly salary
//returns: nothing
void printAffordability(char theArray[][MAX_LENGTH],
double monthlyPayment, int monthlySalary)	{

		double percent;
		percent = monthlyPayment / monthlySalary;
	
		if ( percent > .15)	{
			printf("%s\n\n", theArray[0]);
		}

		else if (percent >= .10 && percent <= .15)	{
			printf("%s\n\n", theArray[1]);
		}

		else	{
			printf("%s\n\n", theArray[2] );
		}
}





