// Teona Johnson
// CPSC 1021
// Lab 03
// contians heade file for square object
// 06/10/2024
// 10 min

#include <iostream>

#ifndef SQUARE_H
#define SQUARE_H

using namespace std;

// create square class object
class Square	{
	private:
		double side { 1.0 };
	public:
		Square() = default;
		Square ( double s);
		bool setSide ( double s);
		double getSide();
		double calcArea();
};

#endif
