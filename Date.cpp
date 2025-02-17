// Teona Johnson
// CPSC 1021
// Lab 6
// 07/08/2024
// contians Date class functions

#include "Date.h"
#include <sstream>
#include <iomanip> 
using namespace std;

// Initialize static const MONTHS array
const string Date::MONTHS[12] = {"January", "February", "March", "April", "May", "June", 
                                 "July", "August", "September", "October", "November", "December"};

// Parameterized constructor
Date::Date(int m, int d, int y) : month(m), day(d), year(y) {}

// Getter and Setter for month
int Date::getMonth() const {
    return month;
}

void Date::setMonth(int m) {
    month = m;
}

// Getter and Setter for day
int Date::getDay() const {
    return day;
}

void Date::setDay(int d) {
    day = d;
}

// Getter and Setter for year
int Date::getYear() const {
    return year;
}

void Date::setYear(int y) {
    year = y;
}

// Print method
string Date::print() const {
    stringstream ss;
    ss << left << setw(10) << Date::MONTHS[month - 1] << " "
       << right << setw(3) << day << " "
       << right << setw(5) << year;
    return ss.str();
}

// Static compare method
bool Date::compare(const Date& d1, const Date& d2) {
    if (d1.year != d2.year) {
        return d1.year < d2.year;
    } else if (d1.month != d2.month) {
        return d1.month < d2.month;
    } else {
        return d1.day < d2.day;
    }
}
