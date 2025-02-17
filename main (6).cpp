// Teona Johnson
// CPSC 1021
// Lab 7
// contains main()

#include <iostream>
#include <iomanip>
#include "DivSales.h"
#include <limits>

using namespace std;

void enterSalesData(DivSales &division, int divNumber) {
    double q1, q2, q3, q4;
    cout << "Enter sales data for Division " << divNumber << endl;

    cout << "Quarter 1: ";
    while (!(cin >> q1) || q1 < 0) {
        cout << "Please enter 0 or greater: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout << "Quarter 2: ";
    while (!(cin >> q2) || q2 < 0) {
        cout << "Please enter 0 or greater: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout << "Quarter 3: ";
    while (!(cin >> q3) || q3 < 0) {
        cout << "Please enter 0 or greater: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout << "Quarter 4: ";
    while (!(cin >> q4) || q4 < 0) {
        cout << "Please enter 0 or greater: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    division.setSales(q1, q2, q3, q4);
}

int main() {
    DivSales division1, division2, division3, division4;

    enterSalesData(division1, 1);
    enterSalesData(division2, 2);
    enterSalesData(division3, 3);
    enterSalesData(division4, 4);

    cout << fixed << setprecision(2);

    cout << "Total Sales for Division 1: $" << division1.getDivSales() << endl;
    cout << "Total Sales for Division 2: $" << division2.getDivSales() << endl;
    cout << "Total Sales for Division 3: $" << division3.getDivSales() << endl;
    cout << "Total Sales for Division 4: $" << division4.getDivSales() << endl;

    cout << "Total Corporate Sales: $" << DivSales::getCorpSales() << endl;

    return 0;
}
