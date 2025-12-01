/*15.	Write a program to interchange values of two variables.*/
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	
    int a = 5;
    int b = 3;

    cout << "Before swapping: a = " << a << ", b = " << b << endl;

    int temp = a;
    a = b;
    b = temp;

    cout << "After swapping: a = " << a << ", b = " << b << endl<<endl;
    
    //other i am going to use swap() function
    cout<<string(50,'-')<<endl<<endl;
    
    swap(a,b);
    cout << "Swap() swapping: a = " << a << ", b = " << b << endl;


    return 0;
}
