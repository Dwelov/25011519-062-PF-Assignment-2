//25.	Write a program to input the values of three sides of a triangle and calculate its area using the formula:
#include <iostream>
#include <cmath>     
#include <iomanip>    

using namespace std;

int main() {
    double a, b, c;

    cout << "---Enter the sides of the triangle---" << endl;

    cout << "Enter side 1: ";
    cin >> a;
    cout << "Enter side 2: ";
    cin >> b;
    cout << "Enter side 3: ";
    cin >> c;

    // Triangle validity check
    if (a + b <= c || a + c <= b || b + c <= a) {
        cout << "Error: The entered sides do not form a triangle." << endl;
        return 1;
    }

    double s = (a + b + c) / 2;  // Semi-perimeter
    double area = sqrt(s * (s - a) * (s - b) * (s - c));

    cout << "\n----------Results-----------------" << endl;
    cout << fixed << setprecision(2);
    cout << "Area of the triangle: " << area << endl;

    return 0;
}
