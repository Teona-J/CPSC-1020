// Teona Johnson
// CPSC 1021
// Lab 6
// 07/08/2024
// contains Date class

#include <string>

#ifndef DATE_H
#define DATE_H

// Date class definition
class Date	{
	private:
				int month = 1,
	    			 day = 1,
		 			 year = 1990;
				static const std::string MONTHS[12];
	
	public: 
				// Default constructor
    			Date() = default;

    			// Parameterized constructor with member initializer list
    			Date(int m, int d, int y);

    			// Getter and Setter for month
    			int getMonth() const;
    			void setMonth(int m);

    			// Getter and Setter for day
    			int getDay() const;
    			void setDay(int d);

    			// Getter and Setter for year
    			int getYear() const;
    			void setYear(int y);

    			// Print method
    			std::string print() const;

    			// Static compare method
    			static bool compare(const Date& d1, const Date& d2);
};

#endif
				
	

