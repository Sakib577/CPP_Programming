#include <bits/stdc++.h>
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr)
#define all(v) v.begin(), v.end()
#define revall(v) v.rbegin(), v.rend()
#define deb(x) cout << #x << " = " << x << '\n'
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

        vector<ll> v(n);
        for(ll &i: v) cin >> i;

        sort(all(v));

        ll MN=LLONG_MAX;
        for (ll i = 0; i < n-1; i++)
        {
            if(v[i+1]-v[i] < MN) MN=v[i+1]-v[i];
        }
        cout << MN << endl;
    }
    return 0;
}