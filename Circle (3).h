#ifndef CIRCLE_H_
#define CIRCLE_H_

#include "Shape.h"

class Circle: public Shape // inherit publically from Shape
{
	private:
    double radius;
    static constexpr double PI = 3.14;

public:
    // Default constructor
    Circle();

    // Argument constructor
    Circle(double r);

    // Override getArea() method
    double getArea() const override;

};

#endif
