//29.	Write a program to print a message if the value of variable "n" is greater than 100, otherwise ignore the statement.
#include <iostream>
using namespace std; 

int main() {
    int num;   
    char choice = 'y';
    while(choice == 'y') {
        cout << "Enter number: ";
        cin >> num;
        if(num > 100) {
            cout << "Number is greater than 100" << endl;
        }
        cout << "Do you wanna check another number? (y/n): ";
        cin >> choice;
    }

    return 0;
}
