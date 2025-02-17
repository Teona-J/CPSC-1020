// Teona Johnson
// CPSC 1021
// Lab 10
// 08/03/2024


#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int main() {
    vector<string> stringData = {"apple", "banana", "apple", "orange", "banana",
    "grape", "kiwi", "banana", "mango", "orange", "apple", "cherry", "mango", "kiwi",
    "strawberry", "grape", "cherry", "apple", "orange", "banana"};
    
    // Create a set to remove duplicates
    set<string> stringSet(stringData.begin(), stringData.end());
    
    // Create a new vector with unique elements from the set
    vector<string> uniqueStrings(stringSet.begin(), stringSet.end());
    
    // Display the unique elements in the new vector using a single space to separate each one
    cout << "Unique elements in the new vector: ";
    for (const auto& str : uniqueStrings) {
        cout << str << " ";
    }
    cout << endl;
    
    return 0;
}
