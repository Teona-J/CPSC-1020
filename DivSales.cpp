// Teona Johnson
// CPSC 1021
// Lab 7
// conatains object defitions

#include "DivSales.h"

// Initialize static member variable
double DivSales::totalSales = 0.0;

// Constructor implementation
DivSales::DivSales() : sales(4, 0.0), divSales(0.0) {}

// Member function to set sales for four quarters
void DivSales::setSales(double q1, double q2, double q3, double q4) {
    // Set the sales vector
    sales[0] = q1;
    sales[1] = q2;
    sales[2] = q3;
    sales[3] = q4;

    // Calculate the total sales for the division
    divSales = q1 + q2 + q3 + q4;

    // Add to the total corporate sales
    totalSales += divSales;
}

// Getter function for division sales
double DivSales::getDivSales() const {
    return divSales;
}

// Static getter function for total corporate sales
double DivSales::getCorpSales() {
    return totalSales;
}
