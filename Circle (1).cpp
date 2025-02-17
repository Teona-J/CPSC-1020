// Teona Johnson
// CPSC 1021
// Lab 03
// 06/10/2024
// contains object source file
// 30 min

#include <cmath>

#include "Circle.h"

using namespace std;

// setter for radius
bool Circle::setRadius( double r)	{
	if ( r >= 0)	{
		radius = r;
		return true;
	}

	else	{
		return false;
	}
}

// getter for radius
double Circle::getRadius () {
	return radius;
}

// Calculate area
double Circle::calcArea()	{
	double circArea;
	circArea = M_PI * pow ( radius, 2);
	return circArea;
}
