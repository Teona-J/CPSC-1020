#include "Circle.h"

// implement getArea()
// Default constructor
Circle::Circle() : Shape("Circle"), radius(0.0) {}

// Argument constructor
Circle::Circle(double r) : Shape("Circle"), radius(r) {}

// Override getArea() method
double Circle::getArea() const {
    return PI * radius * radius;
}
