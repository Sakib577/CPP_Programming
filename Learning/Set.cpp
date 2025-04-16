#include <iostream>
#include <set>
using namespace std;

int main(){
    set <int> numbers = {4,5,2,6,1,8};
    set <string> cars = {"Volvo", "BMW", "Tesla" , "Ford" ,"Tesla"};

    for(int num: numbers){
        cout << num << " ";
    } cout << endl;

    for(string car: cars){
        cout << car << " ";
    } cout << endl;
    
    // greater<type> functor inside the angle brackets to sort in descending order
    set <int, greater<int>> nums = {4,5,2,6,1,8};
    for(int num: nums){
        cout << num << " ";
    } cout << endl;

    cars.insert("Marcedes"); // add elements

    for(string car: cars){
        cout << car << " ";
    } cout << endl;

    cars.erase("Volvo");

    for(string car: cars){
        cout << car << " ";
    } cout << endl;

    nums.clear();

    for(int num: nums){
        cout << num << " ";
    } cout << endl;

    return 0;
}