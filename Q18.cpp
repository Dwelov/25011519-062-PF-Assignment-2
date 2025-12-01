//18.	Write a program to assign values to variables 'vi' and 't' an compute the value of 's' by using the formula:
#include <iostream>
using namespace std;

int main() {
    double vi = 15, t = 50, a = 9.8;     
    double s = (vi * t) + (0.5 * a * t * t);
    cout << "The distance traveled is: " << s << " meters" << endl;
    return 0;
}