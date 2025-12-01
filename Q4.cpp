
//4.Write a program to assign the numeric value to a variable year. Calculate the number of months, and print on the screen.

#include <iostream>
using namespace std; 
int main(){
	int year = 20;
	//as i year = 12 months
	int months = year * 12;
	cout<<"The total number of months in "<<year<<" is equal to "<<months<<" months."<<endl;
	return 0;	
}
