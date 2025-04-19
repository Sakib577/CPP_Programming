#include <iostream>
using namespace std;

int main()
{
    int n;
    int count = 0;
    cin >> n;

    string colors;
    cin >> colors;
    for (int i = 0; i < (n - 1); i++)
    {
        if (colors[i] == colors[i + 1])
        {
            count++;
        }
    }
    cout << count << endl;

    return 0;
}