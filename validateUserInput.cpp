// Teona Johnson
//CPSC 1021
// Lab 02
// Contains function to validate user input
// 06/03/2024
// 10 min

bool validateUserInput ( int daysSpent, double rate, double charges, double meds)	{
	// if input is valid
	if ( daysSpent >= 0 && rate >= 0 && charges >= 0 && meds >= 0 )	{ 
		return true;
	}
	// if input is invalid
	else	{
		return false;
	}
}
