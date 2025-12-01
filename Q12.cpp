// 12.	Write a program to find the volume of a cylinder by using 'const' qualifier. The formula to find the volume of a cylinder is:

#include <iostream>
#include <cmath> //for power
#include <iomanip>    

using namespace std;

int main() {
   float radius, height,volume;
    const double pi = 3.1417;

    cout << "Enter the radius of the cylinder: ";
    cin >> radius;
    cout << "Enter the height of the cylinder: ";
    cin >> height;

    volume = pi * pow(radius, 2) * height;

    cout << fixed << setprecision(4);
    cout << "The volume of the cylinder is: " << volume << endl;

    return 0;
}
