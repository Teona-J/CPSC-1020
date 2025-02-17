// Teona Johnosn
// CPSC 1021
// Lab 7
// contains main()

#include <iostream>
#include "EncryptableString.h"

using namespace std;

int main() {
    string input;

    cout << "This is an Encryption program. Enter a string to encrypt: ";
    getline(cin, input);

    EncryptableString eString(input);
    eString.encrypt();

    cout << "Here is the encrypted string: " << eString << endl;

    return 0;
}
