#include <iostream>
using namespace std;

int main()
{
    string input;
    cin >> input;

    int count = 0;
    for (char c : input)
    {
        if (c == '7' || c == '4')
        {
            count++;
        }
    }

    if (count == 7 || count == 4)
    {
        cout << "YES" << endl;
    } else
        cout << "NO" << endl;
    
    return 0;
}