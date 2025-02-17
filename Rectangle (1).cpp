// Teona Johnson
// CPSC 1021
// Lab 03
// contains source file for Rectangle objest
// 06/10/2024
// 30 min

#include <cmath>
#include <iostream>

#include "Rectangle.h"

using namespace std;

// setter fucntion for length
bool Rectangle::setLength ( double l )	{
	if ( l >= 0)	{
		length = l;
		return true;
	}
	 else	{
		 return false;
	}
}

// setter fucntion for width
bool Rectangle::setWidth ( double w)	{
	if ( w >= 0 )	{
		width = w;
		return true;
	}

	else	{
		return false;
	}
}

// gettwr function for length
double Rectangle::getLength()	{
	return length;
}

// getter function for width
double Rectangle::getWidth()	{
	return width;
}

// calculate area
double Rectangle::calcArea()	{
	double recArea;
	recArea = length * width;
	return recArea;
}



