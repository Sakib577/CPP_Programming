#include <iostream>
#include <deque>
using namespace std;

int main(){

    deque <string> cars ={"BMW", "Ford", "Volvo"}; // it is possible because deque can be accessed 
    for(string car: cars){
        cout << car << " ";
    } cout << endl;

    cout << cars[1] << endl;

    cout << cars.front() << endl;
    cout << cars.back() << endl;
    cout << cars.at(1) << endl; // The .at() function is often preferred over square brackets [] because it(.at()) throws an error message if the element is out of range

    // .push_front() , .push_back() , .pop_front() , .pop_back(), size() . empty() also works.

    cars.push_front("Tesla");

    cout << cars.front() << endl;

    return 0;
}