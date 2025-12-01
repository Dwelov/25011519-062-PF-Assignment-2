//24.	Write a program to input marks of five subjects of a student. Calculate the Total and Average marks. (Each subject has weight of 100 marks).
#include <iostream>
#include <iomanip>  // for fixed and setprecision
using namespace std;

int main() {
    int a, b, c, d, e;
    const int total_marks = 500;
    int obtained_marks; double percentage,avg;

    cout << "----Enter Your Marks to Calculate Percentage----" << endl;

    cout << "Enter marks of subject 1: ";
    cin >> a;
    cout << "Enter marks of subject 2: ";
    cin >> b;
    cout << "Enter marks of subject 3: ";
    cin >> c;
    cout << "Enter marks of subject 4: ";
    cin >> d;
    cout << "Enter marks of subject 5: ";
    cin >> e;

    // Input validation
    if (a < 0 || a > 100 || b < 0 || b > 100 || c < 0 || c > 100 || d < 0 || d > 100 || e < 0 || e > 100) {
        cout << "Error: Marks should be between 0 and 100." << endl;
        return 1;
    }

    obtained_marks = a + b + c + d + e;
    percentage = (static_cast<double>(obtained_marks) / total_marks) * 100;
    avg = static_cast<double>(obtained_marks) / 5;

    cout << "\n----------Results----------" << endl;
    cout << "Total Marks: " << total_marks << endl;
    cout << "Obtained Marks: " << obtained_marks << endl;
    cout << fixed << setprecision(2);
    cout << "Percentage: " << percentage << "%" << endl;
    cout << "Average: " << avg << endl;
    
    //with array
    int subjectMarks[5];
    int marksObtained =0;

    cout<<"Enter the marks "<<endl;
    
    for(int i=0;i<5;i++){
    	cout<<i+1<<" ";
    	cin>>subjectMarks[i];
    	if(subjectMarks[i]<0 || subjectMarks[i]>100){
    		cout<<"Invalid Input"<<endl;
		}else{
			marksObtained += subjectMarks[i];
		}
	}
	cout<<"The obtained marks are "<<marksObtained<<endl;
  double average = static_cast<double>(marksObtained) / 5;
	cout<<"The average is "<<average<<"%"<<endl;

    return 0;
}
