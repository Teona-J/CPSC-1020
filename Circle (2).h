// Teona Johnson
// CPSC 1021
// Lab 03
// 06/10/2024
// contains header file for date object
// 15 min

#ifndef CIRCLE_H
#define CIRCLE_H

// Circle class object definition 
class Circle	{
	private: 
		double radius { 1.0 };// in class member initilization
	public:
		Circle() = default;// default constructor
		Circle( double r ); // parameterized constructor
		bool setRadius ( double r);
		double getRadius ();
		double calcArea();
};

#endif 
