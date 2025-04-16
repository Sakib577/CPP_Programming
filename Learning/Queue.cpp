#include <iostream>
#include <queue>
using namespace std;

int main(){
    queue <string> cars;
    // just like stack we can't add elements at the time of declaration
    cars.push("BMW");
    cars.push("Ford");
    cars.push("Mazda");

    cout << cars.front()<< endl;
    cout << cars.back() << endl;
    cout << endl;

    cars.push("Tesla");
    cout << cars.front()<< endl;
    cout << cars.back() << endl;
    cout << endl;

    cars.pop();
    cout << cars.front()<< endl;
    cout << cars.back() << endl;
    cout << endl;
    return 0;
}