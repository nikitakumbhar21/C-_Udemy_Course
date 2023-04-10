#include <iostream>
using namespace std;

int main() {
    int day;
    cout << "Which day is today [1 : Monday,...,  7 : Sunday] : " <<endl;
    cin >> day;

    if (day >= 1 && day <= 7) {
        switch (day) {
            case 1:
                cout << "Today is Monday" << endl;
                break;
            case 2:
                cout << "Today is Tuesday" << endl;
                break;
            case 3:
                cout << "Today is Wednesday" << endl;
                break;
            case 4:
                cout << "Today is Thursday" << endl;
                break;
            case 5:
                cout << "Today is Friday" << endl;
                break;
            case 6:
                cout << "Today is Saturday" << endl;
                break;
            case 7:
                cout << "Today is Sunday" << endl;
                break;
        }
        cout << "Let's have a fun!!!" << endl;
    } else {
        cout << "Error: Invalid day entered." << endl;
        return 1;
    }

    return 0;
}
