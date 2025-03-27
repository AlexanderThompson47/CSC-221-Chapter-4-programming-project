//this is the third program in the Chapter 4 programming project
#include <iostream>
using namespace std;

int main() {
    int choice;
    double radius, length, width, base, height, area;

    do {
        // Display menu
        cout << "Geometry Calculator\n";
        cout << "1. Calculate the Area of a Circle\n";
        cout << "2. Calculate the Area of a Rectangle\n";
        cout << "3. Calculate the Area of a Triangle\n";
        cout << "4. Quit\n";
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        // Input validation for menu choice
        if (choice < 1 || choice > 4) {
            cout << "Invalid choice. Please select a number between 1 and 4.\n";
            continue; // Skip to next iteration of the loop
        }

        switch (choice) {
        case 1:
            // Calculate the area of a circle
            cout << "Enter the radius of the circle: ";
            cin >> radius;

            // Input validation for radius
            if (radius < 0) {
                cout << "Invalid radius. Please enter a non-negative value.\n";
                break;
            }

            area = 3.14159 * radius * radius;
            cout << "The area of the circle is: " << area << endl;
            break;

        case 2:
            // Calculate the area of a rectangle
            cout << "Enter the length of the rectangle: ";
            cin >> length;
            cout << "Enter the width of the rectangle: ";
            cin >> width;

            // Input validation for length and width
            if (length < 0 || width < 0) {
                cout << "Invalid dimensions. Please enter non-negative values.\n";
                break;
            }

            area = length * width;
            cout << "The area of the rectangle is: " << area << endl;
            break;

        case 3:
            // Calculate the area of a triangle
            cout << "Enter the base of the triangle: ";
            cin >> base;
            cout << "Enter the height of the triangle: ";
            cin >> height;

            // Input validation for base and height
            if (base < 0 || height < 0) {
                cout << "Invalid dimensions. Please enter non-negative values.\n";
                break;
            }

            area = 0.5 * base * height;
            cout << "The area of the triangle is: " << area << endl;
            break;

        case 4:
            // Quit the program
            cout << "Exiting the program. Goodbye!\n";
            break;
        }
    } while (choice != 4);

    return 0;
}
