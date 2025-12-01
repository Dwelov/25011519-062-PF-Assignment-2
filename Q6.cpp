//6.	Write a program to get age (in years) of a person. Calculate the age in months and print the age in months.
#include <iostream>
using namespace std;

 int main(){
 	int age;
 	cout<<"Enter your age: ";
 	cin>>age;
 	float months = age * 12;
 	cout<<"You are "<<months<<" months old"<<endl;
 return 0;	
}