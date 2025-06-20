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
        ll n,c;
        cin >> n >> c;

        vector<ll> v(n);
        for(ll &i: v) cin >> i;

        ll res;
        ll l,u;
        l=0;u=1e9;
        while (l <= u)
        {
            ll mid=(l+u)/2;
            
            __int128_t z=0;
            for (ll i = 0; i < n; i++)
            {
                z+=__int128_t(v[i]+2*mid)*__int128_t(v[i]+2*mid);
            }
            
            if(z>=c){ res= mid;
            u=mid-1;
            }
            else l=mid+1;
        }
        
        cout << res << endl;
    }
    return 0;
}