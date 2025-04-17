#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    vector<string>::iterator itr;

    cout << *cars.begin() << endl;
    cout << *(cars.begin() + 2) << endl;
    // cout << *cars.end() << endl; // it doesn't work because .end() refers to one point after the last element
    cout << *(cars.end() - 1) << endl;

    for (itr = cars.begin(); itr != cars.end(); itr++)
    {
        cout << *itr << " ";
    } cout << endl;

    // Why do we say "point"?
    // Iterators are like "pointers" in that they "point" to elements in a data structure rather than returning values from them.
    // They refer to a specific position, providing a way to access and modify the value when needed, without making a copy of it.
    // For example

    itr = cars.begin();

    *itr = "Tesla";
    cout << *cars.begin() << endl;
    return 0;
}