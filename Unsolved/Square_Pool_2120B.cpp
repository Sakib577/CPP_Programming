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
        ll n,s;
        cin >> n >> s;

        ll dx,dy,x,y;
        ll cnt =0;
        for (ll i = 0; i < n; i++)
        {
            cin >> dx >> dy >> x >> y;
            if((x&1 && y&1) || (!(x&1) && !(y&1))) cnt++;
        }
        
        cout << cnt << endl;
        
    }
    
    
    return 0;
}