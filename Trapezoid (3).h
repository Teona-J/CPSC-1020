#ifndef TRAPEZOID_H_
#define TRAPEZOID_H_

#include "Shape.h"

class Trapezoid : public Shape  // inherit publically from Shape
{
private:
    double base1;
    double base2;
    double height;

public:
    // Default constructor
    Trapezoid();

    // Argument constructor
    Trapezoid(double b1, double b2, double h);

    // Override getArea() method
    double getArea() const override;
};

#endif
