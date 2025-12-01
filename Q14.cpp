/*14.	Write a program to convert millimeters into inches and print the result on screen. (Hint: 1 inch = 25.4 mm)*/
#include <iostream>
#include <iomanip>  // for fixed and setprecision

using namespace std;

int main() {
    int millimeter;
    double inches;
    
    cout << "Enter length in millimeters: ";
    cin >> millimeter;
//Expression to calculate the inches
    inches = millimeter / 25.4;

    cout << fixed << setprecision(4);
    cout << "Length in inches: " << inches << endl;

    return 0;
}
