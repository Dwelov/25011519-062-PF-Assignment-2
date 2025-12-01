//23.	Write a program to input the radius of a circle and calculate area & circumstance of the circle.

#include <iostream>
#include <iomanip>  
using namespace std;

int main() {
//variable declaration	
    double radius,area,circumference;
    const double PI = 3.14159;
    
//Input
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    
//Expression and Validation
   if(cin.fail()){
	cout<<"Invalid Input"<<endl;
   }else{
   	area = PI * radius * radius;
    circumference = 2 * PI * radius;
    //Output
    cout << fixed << setprecision(2);
    cout << "Area: " << area << endl;
    cout << "Circumference: " << circumference << endl;
   }
    return 0;
}
