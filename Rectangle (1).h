// Teona Johnson
// CPSC 1021
// Lab 03
// 06/10/2024
// contians rectangle header file
// 30 min

#include <iostream>

#ifndef RECTANGLE_H
#define RECTANGLE_H

using namespace std;

// create Rectangle class object
class Rectangle	{
	private:
		double length,
			    width;
	public:
		bool setLength ( double i );
		bool setWidth  ( double w);
		double getLength();
		double getWidth();
		double calcArea();
};

#endif
