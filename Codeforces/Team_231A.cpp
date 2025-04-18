#include <iostream>
using namespace std;

int main()
{
    int n;
    int sum = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int approve = 0;
        int array[3];
        for (int j = 0; j < 3; j++)
        {
            cin >> array[j];
            approve += array[j];
        }
        if (approve >= 2)
            sum++;
    }
    cout << sum << endl;

    return 0;
}