// Teona Johnson
// CPSC 1021
// Lab 7
// contains header file for objects

#ifndef PSTRING_H
#define PSTRING_H

#include <string>

class Pstring : public std::string {
public:
    // Constructor that takes an STL string object and passes it to the base class constructor
    Pstring(const std::string& str);

    // Member function to check if the string is a palindrome
    bool isPalindrome() const;
};

#endif
