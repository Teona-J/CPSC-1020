/* Teona Johnson
	02/27/2024
	001
	Lab 6
	Car loan calculator using user given input
*/

#include <stdio.h>
#include <math.h>
#define NUM_LINES 3
#define MAX_LENGTH 95

int main ()	{
	int pay;
	int loanAmt;
	double intRate;
	int term;
	int i;
	int goAgain;
	double monthlyPmnt;
	double percent;
	double total;
	double totalInt;
	char afford[NUM_LINES][MAX_LENGTH];

	for ( i = 0; i < NUM_LINES; i++)	{
		fgets( afford[i], MAX_LENGTH, stdin);
	}
//	freopen("/dev/tty", "rw", stdin);

	goAgain = 1;
	printf("CAR LOAN CALCULATOR");

	printf("\n\nWhat is your monthly take-home pay?  ");
	scanf("%d", &pay);

	while (goAgain == 1)	{

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

		percent = monthlyPmnt / pay;

		if ( percent > .15)	{
			printf("%s\n\n", afford[0]);
		}

		else if (percent >= .10 && percent <= .15)	{
			printf("%s\n\n", afford[1]);
		}

		else	{
			printf("%s\n\n", afford[2] );
		}

		printf("\n\nWould you like to try again? 0 for no, 1 for yes: ");
		scanf("%d", &goAgain);

		while ( goAgain != 1 && goAgain != 0)	{
			printf("Would you like to try again? 0 for no, 1 for yes: ");
			scanf("%d", &goAgain);
		}
	}

return 0;

}





