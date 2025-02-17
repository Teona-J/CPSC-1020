// Teona Johnson
// CPSC 1021
// 05/27/2024
// Calcuates area of a shape 
// 40 min

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main ()	{
	const double PI = 3.14159;
	double length,	   
			 leg1,
			 leg2,
			 radius,
			 areaCirc,
			 areaSquare,
			 areaTri;
	int choice;

	// display menu
	cout << "Program to calculate areas of objects\n\n";
	cout << "      1 -- square\n\n";
   cout << "      2 -- circle\n\n";
   cout << "      3 -- right triangle\n\n";
   cout << "      4 -- quit\n\n";

	// get choice from user
	cin >> choice;

	// Square
	if ( choice == 1)	{

		cout << "Enter side length \n";
		cin >> length;

		// equation for area of a square
		areaSquare = pow ( length, 2 );

		cout << "Area = " << fixed << setprecision(2) << areaSquare << endl;

	}

	// Circle 
	else if ( choice == 2 )	{

		cout << "Enter circle's radius \n";
		cin >> radius;

		// equation for area of a circle
		areaCirc = PI * (pow ( radius, 2 ));

		cout << "Area = " << fixed << setprecision(2) << areaCirc << endl;

	}
	
	// Right triangle
	else if ( choice == 3 )	{

		cout << "Enter length of first leg \n";
		cin >> leg1;

		cout << "Enter length of second leg \n";
		cin >> leg2;

		//equation for area of a right triangle
		areaTri = ( leg1 * leg2 ) / 2;

		cout << "Area = " << fixed << setprecision(2) << areaTri << endl;

	}

	// Quit
	else if ( choice == 4)	{
		exit(1);
	}

	// Invalid choice
	else
		cout << "You entered an invalid choice. Good bye!\n";

	return 0;

}




