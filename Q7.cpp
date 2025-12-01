/*7.	Write a program to get the Roll No. of a student and marks obtained in three subject
 Programming Fundamentals,Introduction to Computing and Computer Graphics. Calculate the Total
  and Average. Each subject has a maximum of 100 marks*/
  
#include <iostream>
#include <string>
#include <iomanip> // for setprecision. i will round off the output with the help of it
using namespace std;

int main() {
    //variable declaration
    string rollNumber;
    float graphics, programming, computing;
    float total, average;   // moved here so scope is correct
    
    // Input student roll number
    cout << "Enter student's roll number: ";
    cin >> rollNumber;
    // Input marks for each subject
    cout << "Enter marks for Computer Graphics (out of 100): ";
    cin >> graphics;
    cout << "Enter marks for Programming Fundamentals (out of 100): ";
    cin >> programming;
    cout << "Enter marks for Introduction to Computing (out of 100): ";
    cin >> computing;
    
    //Validation to keep input from 0 to 100
    if(graphics < 0 || graphics > 100 || programming < 0 || programming > 100 || computing < 0 || computing > 100){
        cout<<"Invalid Input"<<endl;
    }else{
            // Calculate total and average
         total = graphics + programming + computing;
         average = total / 3;
    }
      
    //displaying the result
    cout << fixed << setprecision(2); 
    cout << "\n--- Student Report ---\n";
    cout << "Roll Number: " << rollNumber << endl;
    cout << "Computer Graphics: " << graphics << "/100" << endl;
    cout << "Programming Fundamentals: " << programming << "/100" << endl;
    cout << "Introduction to Computing: " << computing << "/100" << endl;
    cout << "Total Marks: " << total << " / 300" << endl;
    cout << "Average Marks: " << average << " / 100" << endl;
    
    cout<<string(60,'-')<<endl;
    //with the help of arrays
    int marks[3]; int marksOb=0;
    cout<<"Enter your marks in \n 1- Programming Fundamentals\n 2-Introduction to Computing \n 3-Computer Graphics."<<endl;; // fixed semicolon
    //inputting and validating the marks
    for(int i=0;i<3;i++){
        cout<<i+1<<" ";
        cin>>marks[i];
        if(marks[i] < 0 || marks[i] > 100 ){
            cout<<"Invalid Input"<<endl;
        }else{
            marksOb += marks[i]; // fixed operator
        }
    }
    float avg = marksOb / 3;
    //Displaying the result
     cout << fixed << setprecision(2); 
    cout << "\n--- Student Report ---\n";
    cout << "Roll Number: " << rollNumber << endl;
    cout << "Computer Graphics: " << marks[2] << "/100" << endl;
    cout << "Programming Fundamentals: " << marks[0] << "/100" << endl;
    cout << "Introduction to Computing: " << marks[1] << "/100" << endl;
    cout << "Total Marks: " << marksOb << " / 300" << endl;
    cout << "Average Marks: " << avg << " / 100" << endl;

    return 0;
}
