//this is the second program in the Chapter 4 programming project
#include <iostream>
#include <iomanip> // For fixed and setprecision
using namespace std;

int main() {
    double weight, distance, rate, charges;

    // Ask user for the weight of the package
    cout << "Enter the weight of the package (in kilograms (min:1, max:20)): ";
    cin >> weight;

    // Check the weight
    if (weight <= 0 || weight > 20) {
        cout << "Invalid weight. Please enter a weight between 1 and 20 kg." << endl;
        return 1; // Exit the program
    }

    // Ask user for the distance
    cout << "Enter the distance to ship the package (in miles (min:10, max:3000)): ";
    cin >> distance;

    // Check the distance
    if (distance < 10 || distance > 3000) {
        cout << "Invalid distance. Please enter a distance between 10 and 3000 miles." << endl;
        return 1; // Exit the program
    }

    // Determine the rate based on the weight
    if (weight <= 2) {
        rate = 1.10;
    }
    else if (weight > 2 && weight <= 6) {
        rate = 2.20;
    }
    else if (weight > 6 && weight <= 10) {
        rate = 3.70;
    }
    else if (weight > 10 && weight <= 20) {
        rate = 4.80;
    }

    // Calculate charges (rate per 500 miles)
    charges = rate * (distance / 500);

    // Show the charges
    cout << fixed << setprecision(2);
    cout << "The shipping charges are: $" << charges << endl;

    return 0;
}