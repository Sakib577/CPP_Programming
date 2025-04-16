#include <iostream>
#include <map>
using namespace std;

int main()
{
    // structure:
    // map<keytype, valuetype> mapName
    map<string, double> gpa = {{"Nibir", 3.86}, {"Sakib", 3.23}, {"Sohan", 3.20}};

    cout << "GPA of nibir is: " << gpa["Nibir"] << endl;
    // also accessible with .at()
    cout << "GPA of Sakib is: " << gpa.at("Sakib") << endl;
    gpa.at("Sohan") = 3.26; // gpa["Sohan"] = 3.26 does the same thing
    cout << "GPA of Sohan is: " << gpa.at("Sohan") << endl;

    // to add an element,
    gpa["Sadik"] = 3.779;
    // or,
    gpa.insert({"Sadik", 3.78});
    cout <<"GPA of Sadik is: " << gpa.at("Sadik") << endl;

    // A map cannot have elements with equal keys. For example,
    // if we try to add "Sadik" two times to the map, it will only keep the first one

    // To remove specific elements from a map, you can use the .erase() function
    gpa.erase("Sohan");
    // cout << "GPA of Sohan is: " << gpa.at("Sohan") << endl;
    // it will create an error now

    // .clear()  clears out all the elements

    // to check if an element exists
    cout << "Does Sohan has a result?: " << gpa.count("Sohan") << endl;
    // 0 because element doesn't exist anymore

    cout << "Is map empty?: " << gpa.empty() << endl;
    // because map is not empty.

    // Since map elements consist of both keys and values,
    // you have to include .first to access the keys, and .second to access values in the loop
    for(auto gpasingle: gpa){
        cout << gpasingle.first << " gpa is: " << gpasingle.second << endl;
    }

    // to reverse the order, you can use the greater<type> functor inside the angle brackets
    map<string, double, greater<string>> gpa2 = {{"Nibir", 3.86}, {"Sakib", 3.23}, {"Sohan", 3.20}};

    for(auto gpasingle: gpa2){
        cout << gpasingle.first << " gpa is: " << gpasingle.second << endl;
    }

    return 0;
}