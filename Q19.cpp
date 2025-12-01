//19.	Write a program to assign your age in a variable and find the age in months and days.
#include <iostream>
using namespace std;
int main() {
    int year = 20;
    int days = year * 365;
    int months = year * 12;
    cout<<"You lived "<<months<<" months and "<<days<<" days.";
    return 0;
}
