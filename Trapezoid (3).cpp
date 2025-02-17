#include "Trapezoid.h"

// implement getArea()
// Default constructor
Trapezoid::Trapezoid() : Shape("Trapezoid"), base1(0.0), base2(0.0), height(0.0) {}

// Argument constructor
Trapezoid::Trapezoid(double b1, double b2, double h) : Shape("Trapezoid"), base1(b1), base2(b2), height(h) {}

// Override getArea() method
double Trapezoid::getArea() const {
    return 0.5 * (base1 + base2) * height;
}
