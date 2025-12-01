/*3.Write a program to assign two varibles by assignment statement. Interchange the values and print the result on the screen.*/
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
	//variable declaration
	int a=3,b=5;
	cout<<"Method-1"<<endl;
	cout<<"Before Interchange "<<"a: "<<a<<" b: "<<b<<endl;
	cout<<string(30,'-')<<endl;
	
	//Method-1: a new variable temp stores the value of a, a is assigned the value of b, then b is assigned the original value of a
	int temp = a;
	a = b;
	b = temp;
	cout<<"After Interchange "<<"a: "<<a<<" b: "<<b<<endl;
	
	//Method-2: use swap() that is a part of standard algorithm library
	cout<<string(50,'-')<<endl;//this is a string constructor, it repeats the specific character to a number of times
	int x=4,y=3;
	cout<<"Method-2"<<endl;
	cout<<"Before Interchange "<<"x: "<<x<<" y: "<<b<<endl;
	cout<<string(30,'-')<<endl;
    swap(x,y);
    cout<<"After Interchange "<<"x: "<<x<<" y: "<<y<<endl;
    return 0;
}
