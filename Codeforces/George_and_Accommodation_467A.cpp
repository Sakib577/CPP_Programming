#include <iostream>
using namespace std;

int main()
{
    int n, x, y, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        if (y-x >= 2)
        {
            sum++;
        }
        
    }
    cout << sum << endl;
    return 0;
}