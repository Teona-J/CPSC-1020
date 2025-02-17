// Teona Johnson
// CPSC 1021
// Lab 03
// contias header file for trapiziod objecct
// 30 min
// 06/10/2024

#include <iostream>

#ifndef TRAPEZOID_H
#define TRAPEZOID_H

using namespace std;

// create trapiziod object
class Trapezoid	{
	private:
		double base1,
			    base2,
				 height;
	public:
		bool setBase1 ( double b1 );
		bool setBase2 ( double b2);
		bool setHeight( double h);
		double getBase1();
		double getBase2 ();
		double getHeight();
		double calcArea();
};

#endif
