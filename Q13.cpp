//13.	Write a program using define directive to find the area of a circle. The formula to find the area ofa circle is:
#include <iostream>
using namespace std;
//PI is a global variable that means it is accessed throughout the program
const double PI = 3.1417;
//function is reusable block of code that performs the specific task
string areaCalculator(int radius) {
    double area = PI * radius * radius;
    return "The area is " + to_string(area);
}

int main() {
    cout << areaCalculator(23) << endl;
    cout << areaCalculator(25) << endl;

    return 0;
}
