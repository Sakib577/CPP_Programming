#include <iostream>
using namespace std;
int main(){
    // << is insertion operation
    // >> is extraction operation

    string name, fname;
    cout << "What's your name?" << endl;
    cin >> name;

    cout << "What's your full name?" << endl;
    getline(cin >> ws, fname); // >> ws is used to extract the \n character that was in the cin buffer of the previous input.

    cout << "Hello " << name << endl;
    cout << "Your full name is " << fname << endl;
    return 0;
}