#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr)
#define all(v) v.begin(), v.end()
#define revall(v) v.rbegin(), v.rend()
#define deb(x) cout << #x << " = " << x << '\n';
#define newl cout << endl
typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{

    fast_io;
    ll t;
    cin >> t;

    while (t--)
    {
        ll n, k;
        cin >> n >> k;

        vector<ll> v(n);

        if (n == k)
        {
            fill(all(v), 1);
        }
        else if (k == 0)
        {
            fill(all(v), 0);
        }
        else
        {
            k--;
            for (ll i = n - 2; i > 0; i--)
            {
                if (k != 0)
                {
                    v[i] = 1;
                    k--;
                }
            }
            v[0] = 1;
        }
        for (ll i : v)
            cout << i;
        newl;
    }
    return 0;
}