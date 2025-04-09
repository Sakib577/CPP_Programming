#include <iostream>
#include <vector>
using namespace std;

int main(){ 
    vector<string> cars;

    cout << "Is vector empty: " << cars.empty() << endl << endl;


    cars = {"Honda", "BMW", "Lamborghini"};

    cout << cars[0] << endl;
    cout << cars[1] << endl;

    cout << endl;

    cout << cars.front() << endl;
    cout << cars.back() << endl;

    cout << endl;

    cout << cars.at(0) <<endl <<  endl; // The .at() function is often preferred over square brackets [] because it lets you know if an error occurs.

    cars[0]="Opel";

    cout << cars[0] << endl << endl;

    // but it's safer to use at() when changing the value of an element

    cars.at(0) = "Honda";

    cout << cars[0] << endl << endl;

    // To add, use the .push_back() function, which will add an element at the end of the vector

    cars.push_back("Tesla");

    cout << cars.back() << endl;

    // To add, use the .pop_back() function, which will remove an element from the end of the vector

    cars.pop_back();

    cout << cars.back() << endl << endl;

    cout << "Is vector empty: " << cars.empty() << endl << endl;

    // loop
    for (int i = 0; i < cars.size(); i++)
    {
        cout << cars[i] << "  ";
    }
    cout << endl;
    
    // for-each loop
    for(string car: cars){
        cout << car << "  ";
    }
    cout << endl;
    
    return 0;
}