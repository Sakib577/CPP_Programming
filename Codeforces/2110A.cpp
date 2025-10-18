#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> arr(n);

        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());
        ll MAX = arr[n - 1];
        ll MIN = arr[0];
        if (MAX % 2 == 0 && MIN % 2 == 0 || MAX % 2 != 0 && MIN % 2 != 0)
        {
            cout << 0 << endl;
        }
        else
        {
            ll countlow = 1;
            ll counthigh = 1;

            for (ll i = 0; i < n-1; i++)
            {
                if (arr[i] % 2== arr[i+1]%2)
                {
                    countlow++;
                }
                else
                    break;
            }

            for (ll i = n-1; i > 0; i--)
            {
                if (arr[i] % 2== arr[i-1]%2)
                {
                    counthigh++;
                }
                else
                    break;
            }
            
            cout << min(countlow, counthigh) << endl;
        }
    }

    return 0;
}