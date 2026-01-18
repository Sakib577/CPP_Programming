#include <bits/stdc++.h>
using namespace std;

int main(){
    int a=10;
    int &r=a; // &___ is reference and have to be initialized and can't be changed later

    cout << a << endl << r << endl;
    a=35;

    cout << a << endl << r << endl;
    r=25;

    cout << a << endl << r << endl; 
    return 0;
}