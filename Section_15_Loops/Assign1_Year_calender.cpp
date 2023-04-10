#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int year, firstDay;
    cout << "Enter year: ";
    cin >> year;
    cout << "Enter first day of the year (0 for Sunday, 1 for Monday, etc.): ";
    cin >> firstDay;

    int daysInMonth[12] = {31, 28 + (year % 4 == 0 && year % 100 != 0 || year % 400 == 0), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string months[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    string days[7] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};

    int currentDay = firstDay;
    for (int i = 0; i < 12; i++) {
        cout << setw(20) << months[i] << " " << year << endl;
        for (int j = 0; j < 7; j++) {
            cout << setw(5) << days[j];
        }
        cout << endl;

        for (int j = 0; j < currentDay; j++) {
            cout << setw(5) << " ";
        }

        for (int j = 1; j <= daysInMonth[i]; j++) {
            cout << setw(5) << j;
            currentDay++;
            if (currentDay > 6) {
                currentDay = 0;
                cout << endl;
            }
        }
        if (currentDay != 0) {
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
 