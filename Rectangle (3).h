#ifndef RECTANGLE_H_
#define RECTANGLE_H_

#include "Shape.h"

class Rectangle: public Shape // inherit publically from Shape
{
	private:
    double length;
    double width;

public:
    // Default constructor
    Rectangle();

    // Argument constructor
    Rectangle(double l, double w);

    // Override getArea() method
    double getArea() const override;
};

#endif
