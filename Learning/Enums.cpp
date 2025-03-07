#include <iostream>
using namespace std;

int main()
{
    // enums = a user-defined data type that consists
    //          of paired named-integer constants.
    //          GREAT if you have a set of potential options

    // string today = "Friday"; // we can't use string in swicth
    enum day
    {
        saturday = 0,
        sunday = 1,
        monday = 2,
        tuesday = 3,
        wednesday = 4,
        thursday = 5,
        friday = 6
    };

    day today = friday;
    switch (today)
    {
    case saturday:
        cout << "It is saturday." << endl;
        break;
    case sunday:
        cout << "It is sunday." << endl;
        break;
    case monday:
        cout << "It is monday." << endl;
        break;
    case tuesday:
        cout << "It is tuesday." << endl;
        break;
    case wednesday:
        cout << "It is wednesday." << endl;
        break;
    case thursday:
        cout << "It is thursday." << endl;
        break;
    case friday:
        cout << "It is friday." << endl;
    }

    day tomorrow = sunday;
    switch (tomorrow)
    {
    case 0:
        cout << "It is saturday." << endl;
        break;
    case 1:
        cout << "It is sunday." << endl;
        break;
    case 2:
        cout << "It is monday." << endl;
        break;
    case 3:
        cout << "It is tuesday." << endl;
        break;
    case 4:
        cout << "It is wednesday." << endl;
        break;
    case 5:
        cout << "It is thursday." << endl;
        break;
    case 6:
        cout << "It is friday." << endl;
    }

    return 0;
}