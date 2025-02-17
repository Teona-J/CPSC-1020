// Teona Johnson
// CPSC 1021
// 05/27/2024
// This program contians the main() 
// 30 min

#include "compoundCalc.h"
#include <iomanip>
#include <iostream>

using namespace std;
int main ()	{
	double principal,
			 intrestRate,
			 time,
			 retirementSavings;

	cout << "Enter principal amount: " << endl;
	cin >> principal;

	cout << "Enter intrest rate as a decimal: " << endl;
	cin >> intrestRate;

	cout << "Enter number of years money will be left in account: " << endl;
	cin >> time;

	// fucntion call to calulate retirement saving

	retirementSavings = compoundCalc ( principal, intrestRate, time ) ;
	
	cout << "Your retirement savings will be $" << fixed << setprecision(2) << retirementSavings << endl;

	return 0;
}
