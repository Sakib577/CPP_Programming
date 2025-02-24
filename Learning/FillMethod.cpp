#include <iostream>
using namespace std;
// fill() fills an array with a specific value
// fill(array beginning, array ending, value)

int main(){

    int size= 5;
    string Cars[size]={"Honda", "Marcedes"};

    fill(Cars, Cars+2, "BMW");
    fill(Cars+2, Cars+5, "Honda");

    for(string car: Cars){
        cout << car << endl;
    }

    string Foods[5];
    int size2=sizeof(Foods)/sizeof(Foods[0]);

    cout << "Write a food you like: " << endl;
    getline(cin, Foods[0]);
    fill(Foods, Foods+5, Foods[0]);
    
    cout << "You like the following food: " << endl;
    for(string Food: Foods)
    {
        cout << Food << endl;
    }
    
    return 0;
}