#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    int min = 0;
    int max = 0;
    int amazing = 0;
    for (int i = 0; i < t; i++)
    {
        int in;
        cin >> in;
        if (i == 0)
        {
            min = in;
            max = in;
        }
        else if (in < min)
        {
            min = in;
            amazing++;
        }
        else if (in > max)
        {
            max = in;
            amazing++;
        }
    }

    cout << amazing << endl;
}