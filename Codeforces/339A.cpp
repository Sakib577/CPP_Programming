#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    string input;
    cin >> input;

    vector<int> numbers;

    for(char c: input){
        if (isdigit(c))
        {
            numbers.push_back(c - '0');
        }
    }
    sort(numbers.begin(), numbers.end());

    for (int i = 0; i < numbers.size(); i++)
    {
        cout << numbers.at(i);
        if (i != numbers.size()-1)
        {
            cout << '+';
        }
    } cout << endl;

    return 0;
}