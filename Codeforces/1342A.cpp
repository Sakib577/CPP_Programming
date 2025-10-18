#include <bits/stdc++.h>
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr)
#define all(v) v.begin(), v.end()
#define revall(v) v.rbegin(), v.rend()
#define deb(x) cout << #x << " = " << x << '\n';
#define newl cout << endl
typedef long long ll;
typedef __int128_t ll128;
typedef unsigned long long ull;

using namespace std;

int main()
{
    fast_io;
    ll t;
    cin >> t;

    while (t--)
    {
        ll x,y,a,b;
        cin >> x>> y >> a >> b;

        ll paya;
        ll payb;
        if(x > 0 == y > 0){
            paya =abs(x-y)*a;
            ll r=min(abs(x),abs(y));
            payb =r*min(2*a,b);
            
            cout << paya+payb << endl;
        }else{
            cout << abs((max(x,y)-min(x,y))*a) << endl;
        }
    }
    return 0;
}