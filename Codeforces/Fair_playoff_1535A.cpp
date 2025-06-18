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
        vector<ll> v(4);
        for(ll &i: v) cin >> i;

        ll x,y;
        x=max(v[0],v[1]);
        y=max(v[2],v[3]);
        ll z,w;
        z=max(x,y);
        w=min(x,y);

        sort(all(v));
        if(w==v[2] && z==v[3]) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}