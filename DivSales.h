// Teona Johnson
// CPSC 1021
// Lab 7
// contains object header file

#ifndef DIVSALES_H
#define DIVSALES_H

#include <vector>

class DivSales {
private:
    std::vector<double> sales; // Vector to hold four quarters of sales figures
    double divSales;           // Total sales for the division
    static double totalSales;  // Total corporate sales for all divisions

public:
    // Constructor to initialize sales vector with four elements and divSales to 0
    DivSales();

    // Member function to set sales for four quarters
    void setSales(double q1, double q2, double q3, double q4);

    // Getter function for division sales
    double getDivSales() const;

    // Static getter function for total corporate sales
    static double getCorpSales();
};

#endif
