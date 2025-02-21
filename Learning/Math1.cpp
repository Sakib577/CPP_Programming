#include <iostream>
#include <cmath>
using namespace std;
int main (){
    double x=5, y=3;

    cout << max(x, y) << endl;
    cout << min(x, y) << endl;

    double pi=-3.14;
    cout << pi << endl;
    pi = abs(pi);

    cout << pi << endl;
    cout << round(pi) << endl; // rounds to the closest integer
    cout << floor(pi) << endl;
    cout << ceil(pi) << endl;


    return 0;
}