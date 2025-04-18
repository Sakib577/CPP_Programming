#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string first, second;
    cin >> first >> second;

    transform(first.begin(), first.end(), first.begin(), ::tolower); // You're passing a function pointer (or function reference) to tolower.
    transform(second.begin(), second.end(), second.begin(), ::tolower); // C++ needs to know exactly which tolower() you're talking about — and ::tolower makes that explicit and unambiguous.
    
    if (first == second)
    {
        cout << 0 << endl;
    } else if (first > second)
    {
        cout << 1 << endl;
    } else {
        cout << -1 << endl;
    }
    
    return 0;
}