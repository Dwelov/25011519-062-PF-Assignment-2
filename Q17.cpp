//17.	Write a program to separate the integral and fractional parts of a 15.58971 real number and print the result on screen.
#include <iostream>
using namespace std;

int main() {
	float num = 2.456;
	int intPart = num;//assigning the float to int converts it into the integer part
	float decimalPart = num - intPart; // decimal part of a number is the difference of the float and integer part
	//displaying the result
	cout<<"Number: "<<num<<endl
	<<"Integer Part: "<<intPart<<endl
	<<"Decimal Part: "<<decimalPart<<endl;
   return 0;
}
