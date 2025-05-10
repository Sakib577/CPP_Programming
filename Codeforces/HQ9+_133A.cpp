#include <iostream>
using namespace std;

int main()
{
    string word;
    cin >> word;
    bool output = false;

    for (char c : word)
    {
        if (c == 'H' || c == 'Q' || c == '9')
        {
            output = true;
            break;
        }
    }
    cout << (output ? "YES" : "NO") << endl;
    return 0;
}