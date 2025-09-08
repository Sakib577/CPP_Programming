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
        vector <ll> v(3);
        for(ll &i: v) cin >> i;

        ll MX=*max_element(all(v));
        ll cnt=count(all(v),MX);
        
        
        for (ll i = 0; i < 3; i++)
        {
            if(cnt==1 && MX!=v[i])v[i]=MX-v[i]+1;
            else if(cnt!=1)v[i]=MX-v[i]+1;
            else v[i]=MX-v[i];
        }
        
        for(ll &i: v) cout << i << " ";

        newl;
    }
    

    return 0;
}