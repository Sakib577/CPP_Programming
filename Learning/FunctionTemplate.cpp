#include <iostream>
using namespace std;

template <typename T, typename U>           // Template declaration // Another template to support mix and match

auto Max(T x, U y){                // function template...
    return (x > y)? x : y;      // we can use anything in the place of T...
}                               // But before the function template is written the Template should be declared beforehand

int main(){
    cout << "Max: " << Max('1', '2') << endl;
    cout << "Max: " << Max(1, 2) << endl;
    cout << "Max: " << Max(1.2, 2.1) << endl; // but if we mix and match it won't work until 
    // we declare another template and use it as the second parameter
    // also we should set the return type to auto
    cout << "Max: " << Max(2, 3.5) << endl;
    cout << "Max: " << Max(3, '3') << endl;

    return 0;
}