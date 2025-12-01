/*8.	Write a program to get temperature in Fahrenheit. Convert the temperature to Celsius degrees by using the formula.*/

#include <iostream>
#include <iomanip>  
using namespace std;

int main() {
    double tempF,tempC;
    cout << "Enter temperature in Fahrenheit: ";
    cin >> tempF;
    tempC = (tempF - 32) * 5.0 / 9.0;
    cout << fixed << setprecision(2);//using this cause all the susbsequent output to round off
    cout << "Temperature in Celsius: " << tempC<<" °C" << endl;
    return 0;
}
