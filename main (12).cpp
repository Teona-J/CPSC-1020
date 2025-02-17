#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <set>
#include <map>
#include <algorithm> // For std::find
using namespace std;

int main() {
    // Create a set to store unique movie titles
    set<string> uniqueMovieTitles;

    // Read the file to extract unique movie titles
    ifstream file("movie_reviews.txt");
    if (!file) {
        cerr << "Error opening file: movie_reviews.txt" << endl;
        return 1;
    }

    string movieTitle, reviewerName, rating;
    while (getline(file, movieTitle) && getline(file, reviewerName) && getline(file, rating)) {
        uniqueMovieTitles.insert(movieTitle);
    }
    file.close();

    // Copy unique movie titles from set to vector
    vector<string> movieTitles(uniqueMovieTitles.begin(), uniqueMovieTitles.end());

    // Create a map to store reviewer names as keys and vectors of ratings as values
    map<string, vector<int>> reviewerRatings;

    // Read the file again to extract reviewer names and ratings
    file.open("movie_reviews.txt");
    if (!file) {
        cerr << "Error reopening file: movie_reviews.txt" << endl;
        return 1;
    }

    while (getline(file, movieTitle) && getline(file, reviewerName) && getline(file, rating)) {
        if (reviewerRatings.find(reviewerName) == reviewerRatings.end()) {
            reviewerRatings[reviewerName] = vector<int>(movieTitles.size(), 0);
        }
        auto it = find(movieTitles.begin(), movieTitles.end(), movieTitle);
        if (it != movieTitles.end()) {
            int index = distance(movieTitles.begin(), it);
            reviewerRatings[reviewerName][index] = stoi(rating);
        }
    }
    file.close();

    // Output each movie title separated by /
    cout << "HERE ARE THE MOVIE TITLES\n";
    cout << "==========================\n";
    for (const auto& m : movieTitles) {
        cout << m << " / ";
    }
    cout << endl << endl;

    // Output each reviewer followed by their ratings for each movie
    cout << "HERE ARE THE MOVIE RATINGS\n";
    cout << "===========================\n";
    for (const auto& pair : reviewerRatings) {
        cout << pair.first << ": ";
        for (size_t i = 0; i < pair.second.size(); ++i) {
            cout << pair.second[i];
            if (i != pair.second.size() - 1) {
                cout << ",";
            }
        }
        cout << endl;
    }

    return 0;
}

