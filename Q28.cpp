//28.	Write a program to input values into variables a, b and c. Compute the value of 'disc' by using formula: disc = b2 - 4ac
#include <iostream>
using namespace std;

int main() {
    double a, b, c,disc;

    cout << "Enter a number (a): ";
    cin >> a;
    cout << "Enter another number (b): ";
    cin >> b;
    cout << "Enter one more number (c): ";
    cin >> c;

    disc = (b * b) - (4 * a * c);

    cout << "Discriminant = " << disc << endl;

    
      
      
    return 0;
}