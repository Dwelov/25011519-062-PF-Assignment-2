//10.	Wirte a program to convert 2.5 miles into kilometers and print the result on screen. (Hint: 1 mile = 1.609 kilometers)
#include <iostream>
#include <iomanip>  

using namespace std;

int main() {
    double mile = 2;
    double kilometer = mile * 1.609;
    cout << fixed << setprecision(5);
    cout << mile << " miles is equal to " << kilometer << " kilometers." << endl;
    return 0;
}
