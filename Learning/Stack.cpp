#include <iostream>
#include <stack>
using namespace std;

int main(){
    // stack <string> cars = {"Bmw", "Honda", "Mazda"};
    // it doesn't work with stack

    stack <string> cars;

    cars.push("BMW");
    cars.push("Ford");
    cars.push("Mazda");
    cars.push("Tesla");
    
    cout << cars.top() << endl;

    cars.top() = "Honda";

    cout << cars.top() << endl;

    cars.pop();

    cout << cars.top() << endl;
    cout << "Is empty? = " << cars.empty() << endl;
    return 0;
}