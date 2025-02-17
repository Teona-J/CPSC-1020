// Teona Johnson
// CPSC 1021
// Lab 03
// contians source file for Trapiziod object
// 06/10/2024
// 35 min

#include <cmath>
#include <iostream>

#include "Trapezoid.h"

using namespace std;

// setter fucntion for base1
bool Trapezoid::setBase1 ( double b1)	{
	if ( b1 >= 0 )	{
		base1 = b1;
		return true;
	}

	else	{
		return false;
	}
}

// setter function for base2
bool Trapezoid::setBase2 ( double b2 )	{
	if ( b2 >= 0 )	{
		base2 = b2;
		return true;
	}

	else	{
		return false;
	}
}

// setter function for height
bool Trapezoid::setHeight ( double h )	{
	if ( h >= 0 )	{
		height = h;
		return true;
	}

	else	{
		return false;
	}
}

// getter function for base1
double Trapezoid::getBase1 ()	{
	return base1;
}

// getter function for base2 
double Trapezoid::getBase2 ()	{
	return base2;
}

// getter function for height
double Trapezoid::getHeight ()	{
	return height;
}

// calcuate trapiziod area
double Trapezoid::calcArea ()	{
	double trArea;
	trArea = ( base1 + base2 ) * height / 2; 
	return trArea;
}


