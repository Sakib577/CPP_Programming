#include <iostream>
using namespace std;

int main(){
    // Null value = something that doesn't exist or something that doesn't have a value
    // Null pointer = a pointer that doesn't point to anything (it's holding a null value)

    // nullptr = that represents a null pointer

    // helpful to determine if an adress is successfully assigned to a pointer
    // int *pNull; // uninitialized pointer

    int *pNull = nullptr;
    int x = 60;

    pNull = &x;

    if (pNull == nullptr)
    {
        cout << "Adress was not assigned" << endl;
    } else {
        cout << "Adress was assigned" << endl;
        cout << "Value of x: " << *pNull << endl;
    }

    return 0;
}