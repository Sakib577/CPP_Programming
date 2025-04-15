#include <iostream>
#include <list>

using namespace std;

int main()
{

    list<string> cars;
    cars = {"Volvo", "BMW", "Tesla"};

    // or,

    // list<string> cars= {"Volvo", "BMW", "Tesla"};

    for (string car : cars)
    {
        cout << car << " ";
    }

    cout << endl;

    cout << cars.front() << endl;
    cout << cars.back() << endl;

    cars.push_front("Toyota");
    cars.push_back("Mazda");

    for (string car : cars)
    {
        cout << car << " ";
    }

    cout << endl;

    cars.pop_back();

    for (string car : cars)
    {
        cout << car << " ";
    }

    cout << endl;
    cout << cars.size() << endl;
    cout << "Is empty? = " << cars.empty() << endl;

    return 0;
}