//9.	Write a program to find the maximum number from four numbers.
#include <iostream>
using namespace std;

int main() {
    // Method 1: Using user input-Comparison
    double num1, num2, num3, num4;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Enter third number: ";
    cin >> num3;
    cout << "Enter fourth number: ";
    cin >> num4;

    int max_input = num1;
    if (num2 > max_input) max_input = num2;
    if (num3 > max_input) max_input = num3;
    if (num4 > max_input) max_input = num4;

    cout << "Maximum from user input: " << max_input << endl;

cout<<"\n------------------------------------------------------------------"<<endl;
    // Method 2: Using predefined array
    int numbers[] = {10, 25, 5, 40};
    int max_array = numbers[0];

    for (int i = 1; i < 4; i++) {
        if (numbers[i] > max_array) {
            max_array = numbers[i];
        }
    }

    cout << "Maximum from predefined array: " << max_array << endl;

    return 0;
}
