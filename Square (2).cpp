// Teona Johnson
// CPSC 1021
// Lab 03
// conatians source file for square object
// 06/1-/2024
// 30 min

#include <cmath>
#include <iostream>

#include "Square.h"

using namespace std;
// parameterized constructor
Square::Square(double s) : side (s) {}

// setter function for side
bool Square::setSide ( double s)	{
	if ( s >= 0)	{
		side = s;
		return true;
	}

	else	{
		return false;
	}
}

// getter function for side
double Square::getSide()	{
	return side;
}

// calcualte area of square
double Square::calcArea()	{
	double sqArea;
	sqArea = pow ( side, 2);
	return sqArea;
}


