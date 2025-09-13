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
        ll n,m,x,y;
        cin >> n>> m >> x>> y;
        
        ll cnt=0;
        for (ll i = 0; i < n; i++)
        {
            ll in ;
            cin >> in;
            if(in <= y) cnt++;
        }
        
        for (ll i = 0; i < m; i++)
        {
            ll in ;
            cin >> in;
            if(in <= x) cnt++;
        }

        cout << cnt << endl;
    }
    

    return 0;
}