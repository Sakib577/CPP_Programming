#include <iostream>
using namespace std;

void swap(string &x, string &y);

int main(){
    string x= "Cool water";
    string y= "Hot water";

    swap(x, y);

    cout << x << "\n"<<  y << endl;
    cout << &x << "\n"<<  &y << endl;

    return 0;
}

    // here pass by reference happened and that's why the value is changed
    // x, y values in the swap method is the original x, y from the main function

void swap(string &x, string &y){
    string temp;
    
    temp = x;
    x=y;
    y= temp;
    cout << &x << "\n"<<  &y << endl;
}