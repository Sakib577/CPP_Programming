#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string input, revinput;
    cin >> input >> revinput;

    reverse(input.begin(), input.end());

    if (input == revinput)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;

    return 0;
}