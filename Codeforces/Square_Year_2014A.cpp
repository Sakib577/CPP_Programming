#include <iostream>
#include <cmath>
using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        string year;
        cin >> year;
        ll a = (year[0] - '0') * 10 + (year[1] - '0');
        ll b = (year[2] - '0') * 10 + (year[3] - '0');
        ll yearl = stoi(year);
        ll root = sqrtl(yearl);

        if ((a + b) * (a + b) == yearl)
        {
            cout << a << " " << b << endl;
        }
        else if (root*root == yearl)
        {
            bool yes= false;
            for (ll i = 0; i <= root / 2; i++)
            {
                a = i;
                b =root-i;
                if ((a + b) * (a + b) == yearl)
                {
                    yes=true;
                    break;
                }
            }
            if (yes)
            {
                cout << a << " " << b << endl;
            }
            else
            cout << -1 << endl;
        }
        else
            cout << -1 << endl;
    }

    return 0;
}