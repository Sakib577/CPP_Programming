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
        ll n;
        cin >> n;

        map <ll,ll> mp;
        for(ll i =0; i < n; i++) {
            ll u;
            cin >> u;
            if(u <=n) mp[u]++;
        }

        vector<ll> freq(n+1);
        for (auto &[k,v]: mp)
        {
            ll x=0;
            while (x<n && k<=n)
            {
                x+= k;
                if(x<=n){
                    freq[x]+=v;
                }
            }
        }
        
        cout << *max_element(all(freq)) << endl;
    }
    return 0;
}