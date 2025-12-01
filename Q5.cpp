//5.	Write a program to get two numbers. Calculate the sum and product of the numbers and then print the result on the screen.
#include <iostream>
using namespace std;
 int main(){
 	double num1, num2;// the reason to use double is that it can accurately answer with a precision of 15 digits after the decimal point
 	//prompting user to enter the numbers
 	cout<<"Enter any two numbers to get the sum and Product"<<endl;
 	cout<<"Enter the first number: ";
 	cin>>num1;
 	cout<<"Enter the second number: ";
 	cin>>num2;
 	cout<<"Sum: "<<num1+num2<<endl
 	<<"Product: "<<num1*num2;
 	return 0;
}