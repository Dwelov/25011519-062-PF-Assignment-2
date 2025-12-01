//22.	Write a program to input the name, age, height and gender of the student and prints the data of student on screen.
#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int age;
    float height;
    char gender;

    cout << "Enter your name: ";
    getline(cin, name);//getline() reads the input after the cin unlike the cin

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your height in feet: ";
    cin >> height;

    cout << "Enter your gender (M/F): ";
    cin >> gender;
//displaying the information
    cout << "\n"<<string(15,'-') <<" User Information -------------\n";
    cout << "\tName: " << name << endl;
    cout << "\tAge: " << age << endl;
    cout << "\tHeight: " << height << " feet" << endl;
    cout << "\tGender: " << gender << endl;

    return 0;
}
