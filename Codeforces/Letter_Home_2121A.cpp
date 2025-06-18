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

        ll MX=0,MN=LLONG_MAX;
        ll in;
        for (ll i = 0; i < n; i++)
        {
            cin >> in;
            if(in < MN) MN=in;
            if(in > MX) MX=in;
        }
        ll res;
        if(s >= MX){
            res= (s-MN);
        }else if(s <= MN) {
            res= (MX-s);
        } else {
            res= abs(MX-s)+abs(s-MN)+ min(abs(MX-s),abs(s-MN));
        }
        
        // deb(abs(MX-s));
        // deb(abs(s-MN));
        // deb(min(abs(MX-s),abs(s-MN)));

        cout << res << endl;
    }
    return 0;
}