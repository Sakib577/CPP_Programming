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
    while(t--){
        ll x,y;
        cin >> x>> y;
        
        ll z=max(x,y);
        ll zs=z*z;
        ll res;
        if((zs&1)==0){
            if(y==z) res=zs-(y-1+(y-x));
            else res=zs-(y-1);
        } else {
            if(x==z) res=zs-(x-1+(x-y));
            else res=zs-(x-1);
        }

        cout << res << endl;
    }
    return 0;
}