#include <bits/stdc++.h>
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
        ll n;
        cin >> n;

        ll cnt=0;
        for (ll i = 1; i <= 9; i++)
        {
            ll x=i;
            while (x<=n)
            {
                cnt++;
                x=x*10+i;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}