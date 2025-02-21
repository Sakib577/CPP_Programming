#include <iostream>
using namespace std;

int main(){
    string name;
    cout << "Enter your name:";
    getline(cin, name);

    // if(name.length() > 12){
    //     cout << "Your name is too long";
    // } else {
    //     cout << "Welcome " << name;
    // }

    if(name.empty()){
        cout << "You didn't write your name.";
    } else {
        cout << "Welcome " << name << endl;
    }

    // name.clear();

    // cout << "Hello " << name;

    
    // name.append("@gmail.com");

    // cout << "Your username is: " << name; // adds strings

    cout << name.at(4) << endl; 
    name.insert(5, " Student");

    cout << name << endl;

    cout << name.find("i") << endl;
    
    name.erase(0, 2);
    cout << name << endl;

    return 0;
}