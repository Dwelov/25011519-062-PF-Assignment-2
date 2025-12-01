#include <iostream>
#include <ctime>    
#include <string>
using namespace std;

int main() {
    string name;
    int birth_year, birth_month, birth_day;

    cout << "Enter your name: ";
    getline(cin, name);//when I use Cin the text after the space no appeared that i use getline()

    cout << "Enter your birth year (e.g., 1990): ";
    cin >> birth_year;
    cout << "Enter your birth month (1-12): ";
    cin >> birth_month;
    cout << "Enter your birth day (1-31): ";
    cin >> birth_day;

    // Get current date
    time_t now = time(0);
    tm *ltm = localtime(&now);
    int current_year = 1900 + ltm->tm_year;
    int current_month = 1 + ltm->tm_mon;
    int current_day = ltm->tm_mday;
//validating the input to make sure that the things happen as i plan
    if (birth_month <= 12 && birth_day <= 31) {
        int years = current_year - birth_year;
        int months = current_month - birth_month;
        int days = current_day - birth_day;
//if days are negative then plus the 1 month to make the days positive
        if (days < 0) {
            months -= 1;
            days += 30; 
        }
//if months are negative then plus the 1 year to make the months positive
        if (months < 0) {
            years -= 1;
            months += 12;
        }
//displaying the result
        cout << name << ", you have lived " << years << " years, "
             << months << " months, and " << days << " days." << endl;
    } else {
        cout << "Invalid month or day input." << endl;
    }

    return 0;
}