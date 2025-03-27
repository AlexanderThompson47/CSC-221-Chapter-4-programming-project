//this is the first program in the Chapter 4 programming project
#include <iostream>
using namespace std;

int main() {
    int month, year;

    // Prompt user for the month
    cout << "Enter a month (1-12): ";
    cin >> month;

    // Input validation for month
    if (month < 1 || month > 12) {
        cout << "Invalid month. Please enter a value between 1 and 12." << endl;
        return 1; // Exit the program
    }

    // Prompt user for the year
    cout << "Enter a year: ";
    cin >> year;

    int days;

    // Check number of days based on the month
    if (month == 2) { // February
        // Check if it's a leap year
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            days = 29;
        }
        else {
            days = 28;
        }
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11) { // Months with 30 days
        days = 30;
    }
    else { // All other months have 31 days
        days = 31;
    }

    // Display the number of days
    cout << days << " days" << endl;

    return 0;
}