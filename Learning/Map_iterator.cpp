#include <iostream>
#include <map>
using namespace std;

int main()
{
    using map_gpa = map<string, double>;
    map_gpa gpa = {{"Nibir", 3.86}, {"Sakib", 3.23}, {"Sohan", 3.20}};

    for (map_gpa::iterator itr = gpa.begin(); itr != gpa.end(); itr++)
    {
        cout << itr->first << ": " << itr->second << endl;
    } cout << endl;

    using rev_map_gpa = map<string, double, greater<string>>;
    rev_map_gpa gpa2 = {{"Nibir", 3.86}, {"Sakib", 3.23}, {"Sohan", 3.20}};
    for (auto gpasingle : gpa2)
    {
        cout << gpasingle.first << ": " << gpasingle.second << endl;
    } cout << endl;

    // another way of loopig
    for(auto [key, value]: gpa)
        cout << key << ": " << value << endl;
    return 0;
}