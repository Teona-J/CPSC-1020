/* Teona Johnson
	02/06/2024
	001
	Lab 3
	Car loan calculator using user given input
*/

#include <stdio.h>
#include <math.h>

int main ()	{
	int pay;
	int loanAmt;
	double intRate;
	int term;
	int goAgain;
	double monthlyPmnt;
	double percent;
	double total;
	double totalInt;

	goAgain = 1;
	printf("CAR LOAN CALCULATOR");

	printf("\n\nWhat is your monthly take-home pay?  ");
	scanf("%d", &pay);

	while (goAgain == 1)	{

		printf("\nEnter the loan amount:  ");
		scanf("%d", &loanAmt);

		printf("Interest rate:  ");
		scanf("%lf", &intRate);
		
		printf("Term on loan (number of months):  ");
		scanf("%d", &term);
		
		intRate = intRate / 100;

		monthlyPmnt = loanAmt * (intRate / 12) / ( 1 - pow (1 + intRate/12, -term));

		printf("\n\nYour monthly payment will be: $%.2lf.", monthlyPmnt);

		total = monthlyPmnt * term;
		totalInt = total - loanAmt;

		printf("\n\nAt the end of the loan, you will have paid $%.2lf\nin interest for a total of $%.2lf.", totalInt, total);

		percent = monthlyPmnt / pay;

		if ( percent > .15)	{
			printf("\n\nThe monthly payment is more than 15%% of your monthly income\nand is probably not affordable.");
		}

		else if (percent >= .10 && percent <= .15)	{
			printf("\n\nThe monthly payment is between 10-15%% of your monthly income.\nIt might be affordable.");
		}

		else	{
			printf("\n\nThe monthly payment is less than 10%% of your monthly income.\nThis is an affordable loan." );
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





