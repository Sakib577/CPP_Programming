#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int x, y, a;
    while (n--)
    {
        cin >> x >> y >> a;
        a++;
        a %= (x+y);

        
        if (a > x || a == 0)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }

    return 0;
}