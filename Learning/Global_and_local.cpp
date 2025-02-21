#include <iostream>
using namespace std;
int x =5;
int main(){
    int x =2;
    cout << x << endl;
    cout << ::x << endl; // using :: to use global version of x
    return 0;
}