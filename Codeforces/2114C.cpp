#include <iostream>
#include <vector>
using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> elm(n);
        ll count = 1;

        for (int i = 0; i < n; i++)
        {
            cin >> elm[i];
        }

        ll x = elm[0];

        for (int i = 1; i < n; i++)
        {
            if (elm[i] > x + 1)
            {
                count++;
                x = elm[i];
            }
        }

        cout << count << endl;
    }

    return 0;
}