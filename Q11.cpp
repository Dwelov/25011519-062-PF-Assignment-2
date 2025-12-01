//11.	Write a program to declare and initialize two variables of "int" type. Calculate the average of these values and print the result on screen.

#include <iostream>
using namespace std;

int main() {
    float num1 = 5, num2 = 16;
    float average = (num1 + num2) / 2; //expression
    cout << "The average of " << num1 << " and " << num2 << " is " << average << " ." << endl;
    return 0;
}
