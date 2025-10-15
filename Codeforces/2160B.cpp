#include <bits/stdc++.h>
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr)
#define all(v) v.begin(), v.end()
#define revall(v) v.rbegin(), v.rend()
#define deb(x) cout << #x << " = " << x << '\n';
#define newl cout << endl
#define endl "\n"
typedef long long ll;
typedef unsigned long long ull;
const ll M = 1e9+7;

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

        vector<ll> b(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        
        vector<ll> a(n);
        a[0]=1;
        ll x=1;
        for (ll i = 1; i < n ; i++)
        {
            ll diff=b[i]-b[i-1];
            if(diff == i+1) a[i]=++x;
            else a[i]=a[i-diff];
        }
        

        for (ll i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        newl;
    }

    return 0;
}