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

        vector <ll> v(n);
        ll e=2;
        for (ll i = 0; i < n/2; i++)
        {
            v[i]=e;
            e+=2;
        }

        ll o=(n%2==0)?(n-1):n;
        for (ll i = n/2; i < n; i++)
        {
            v[i]=o;
            o-=2;
        }
        
        for(ll i: v) cout << i << " ";
        newl;
    }
    return 0;
}