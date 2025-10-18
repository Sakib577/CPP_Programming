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
        ll n,k;
        cin >> n >> k;

        ll tmp=k;
        vector<ll> v(n);
        for(ll &i: v) cin >> i;
        ll i=n-1;

        sort(all(v));
        while (k && i>=0)
        {
            v[i]=v[i]*k;
            k--;
            i--;
        }
        
        ll sum=0;
        sort(revall(v));
        for (ll i = 0,j=0; i < n && j<tmp ; i++, j++)
        {
            sum+=v[i];
        }
        

        cout << sum << endl;
    }
    

    return 0;
}