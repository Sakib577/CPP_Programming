#include <iostream>
using namespace std;

int main()
{
    int n;
    string op;

    cin >> n;

    int x = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> op;
        if (op == "X++" || op == "++X" || op == "x++" || op == "++x")
        {
            x++;
        }
        else if (op == "X--" || op == "--X" || op == "x--" || op == "--x")
        {
            x--;
        }
    }

    cout << x << endl;
    return 0;
}