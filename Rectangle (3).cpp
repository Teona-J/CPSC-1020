#include "Rectangle.h"

// implement getArea()

// Default constructor
Rectangle::Rectangle() : Shape("Rectangle"), length(0.0), width(0.0) {}

// Argument constructor
Rectangle::Rectangle(double l, double w) : Shape("Rectangle"), length(l), width(w) {}

// Override getArea() method
double Rectangle::getArea() const {
    return length * width;
}
