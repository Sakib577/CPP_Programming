#include <iostream>
#include <list>

using namespace std;

int main(){

    list<string> cars;
    cars= {"Volvo", "BMW", "Tesla"};

    // or,

    // list<string> cars= {"Volvo", "BMW", "Tesla"};

    for(string car: cars){
        cout << car << " ";
    }

    cout << endl;

    return 0;
}