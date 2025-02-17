// Teona Johnson
// CPSC 1021
// Lab 03
// contians main()
// 06/10/2024
// 1 hour

#include <iostream>
#include <iomanip>

#include "Circle.h"
#include "Square.h"
#include "Rectangle.h"
#include "Trapezoid.h"

using namespace std;

int main ()	{
	int choice,
		 goAgain = 1;

	double area;

	while ( goAgain )	{

		cout << "      1 -- circle\n\n";
		cout << "      2 -- square\n\n";
		cout << "      3 -- rectangle\n\n";
		cout << "      4 -- trapezoid\n\n";
		cout << "      5 -- quit\n\n";

		cin >> choice;

		// if cricle
		if ( choice == 1)	{
			// creat circle instance
			Circle myCircle;
			double radius;

			cout << "Radius: ";
			cin >> radius;
			
			// check radius
			myCircle.setRadius ( radius );
			
			//if valid radius
			if ( myCircle.setRadius ( radius ) )	{
				area = myCircle.calcArea();

				cout << "Area: " << fixed << setprecision(1) << area << endl;
				goAgain = 0;
			}

			// if invalid radius
			else	{
				do 	{
					cout << "Invalid radius.Try again";
					cout << "\nRadius: ";

					cin >> radius;

					// recheck radius
					myCircle.setRadius ( radius );

				} while ( ! myCircle.setRadius ( radius ));

				// circle calculation function call
				area = myCircle.calcArea();
				cout << "Area: " << fixed << setprecision(1) << area << endl;
				
			}
			
			goAgain = 0;
		}
		
		// SQUARE
		else if ( choice == 2 )	{

			// create square instance
			Square mySquare;
			double side;

			cout << "Side: ";
			cin >> side;

			// check side
			mySquare.setSide( side );

			// if valid side
			if ( mySquare.setSide ( side ))	{
				area = mySquare.calcArea();

				cout << "Area: " << fixed << setprecision(1) << area << endl;
			}
			
			//if invalid side
			else	{
				do		{
					cout << "Invalid side length. Try again";
					cout << "\nSide: ";

					cin >> side;
					
					// recheck side
					mySquare.setSide ( side );

				} while ( !mySquare.setSide ( side ) );
				
				// calculate square area function call
				area = mySquare.calcArea();
				cout << "Area: " << fixed << setprecision(1) << area << endl;
			}

			goAgain = 0;
		}
		
		// RECTANGLE
		else if ( choice == 3 )	{

			//create rectangle instance
			Rectangle myRectangle;
			double length,
					 width;

			cout << "Length: ";
			cin >> length;
			
			// check length
			myRectangle.setLength ( length );

			// if valid length
			if ( myRectangle.setLength ( length ))	{
				// keep length
			}
			
			// if valid length
			else	{
				do		{
					cout << "Invalid length. Try again";
					cout << "\nLength: ";

					cin >> length;

					// recheck length
					myRectangle.setLength ( length );

				} while ( !myRectangle.setLength ( length ) );
			}

			cout << "Width: ";
			cin >> width;

			// check width
			myRectangle.setWidth ( width );

			// if valid width
			if ( myRectangle.setWidth ( width ))	{
				// keep width
			}
			
			// if invalid width
			else	{
				do		{
					cout << "Invalid width. Try again";
					cout << "\nWidth: ";

					cin >> width;

					// recheck width
					myRectangle.setWidth( width );

				} while ( !myRectangle.setWidth ( width ) );
			}
			
			// calculate rectangle area function call
			area = myRectangle.calcArea();
			cout << "Area: " << fixed << setprecision(1) << area << endl;
			goAgain = 0;
		}

		// TRAPEZOID
		else if ( choice == 4 )	{
			
			// create trapezoid instance
			Trapezoid myTrap;
			double base1,
					 base2,
					 height;
			cout << "Base1: ";
			cin >> base1;
			
			// check base 1
			myTrap.setBase1 ( base1 );

			// if valid base 1
			if ( myTrap.setBase1 ( base1 ))	{
				// keep length
			}
			
			// if invalid base 1
			else	{
				do		{
					cout << "Invalid base. Try again";
					cout << "\nBase1: ";

					cin >> base1;

					// recheck base 1
					myTrap.setBase1 ( base1 );

				} while ( !myTrap.setBase1 ( base1 ) );
			}

			cout << "Base2: ";
			cin >> base2;

			// check base 2
			myTrap.setBase2 ( base2 );

			// if valid base 2
			if ( myTrap.setBase2 ( base2 ))	{
				// keep base2
			}
			
			//if invalid base 2
			else	{
				do		{
					cout << "Invalid base. Try again";
					cout << "\nBase2: ";

					cin >> base2;

					//recheck base2
					myTrap.setBase2( base2 );

				} while ( !myTrap.setBase2 ( base2 ) );
			}

			cout << "Height: ";
			cin >> height;
			
			// check height
			myTrap.setHeight ( height );

			// if valid height
			if ( myTrap.setHeight ( height ) )	{
				// keep height
			}
			
			// if invalid height
			else	{
				do		{
					cout << "Invalid height. Try again";
					cout << "\nHeight: ";

					cin >> height;

					// recheck height
					myTrap.setHeight ( height );
				} while ( !myTrap.setHeight ( height ) );
			}
			
			// calculate trapeziod area function call
			area = myTrap.calcArea();
			cout << "Area: " << fixed << setprecision(1) << area << endl;
			goAgain = 0;
		}

		else if ( choice == 5 )	{
			exit(0);
		}

		else	{
			cout << "Invalid choice. Try again\n";
			goAgain = 1;
		}
	}
	
	return 0;
}
























