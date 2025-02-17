// Teona Johnson
// CPSC 1021
// Lab 7
// contains source file for object

#include "Pstring.h"

#include <string>

// Constructor
Pstring::Pstring(const std::string& str) : std::string(str) {}

// function definition
bool Pstring::isPalindrome() const {
    int n = this->length();
    for (int i = 0; i < n / 2; ++i) {
        if ((*this)[i] != (*this)[n - i - 1]) {
            return false;
        }
    }
    return true;
}
