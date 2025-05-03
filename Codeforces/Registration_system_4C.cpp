#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int n;
    cin >> n;
    unordered_map<string, int> names; // unordered map is used for faster lookup than map( O(n) vs O(log n))
    while (n--)
    {
        string input;
        cin >> input;
        if (names[input])
        {
            cout << input << names[input] << endl;
            names[input]++;
        } else{
            names[input]++;
            cout << "OK" << endl;
        }        
    }

    return 0;
}