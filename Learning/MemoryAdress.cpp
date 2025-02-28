#include <iostream>
using namespace std;

int main(){
    string name= "Sakib";
    int num=10;
    int gpa= 5;

    cout << &name << endl; // & is adress of operator
    cout << &num << endl;
    cout << &gpa << endl;

    return 0;
}