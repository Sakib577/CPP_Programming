#include <iostream>
using namespace std;

int main()
{
    string input;
    int n, a = 0, d = 0;

    cin >> n >> input;
    for (char c : input)
    {
        if (c == 'A')
            a++;
        else
            d++;
    }

    if (a == d)
        cout << "Friendship" << endl;
    else if (a > d)
        cout << "Anton" << endl;
    else
        cout << "Danik" << endl;

    return 0;
}