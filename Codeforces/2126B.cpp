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
        ll n,k;
        cin >> n >> k;

        vector <ll> v(n);
        for(ll &i: v) cin >> i;

        ll c=0;
        ll cnt=0;
        for (ll i = 0; i < n; i++)
        {
            if(v[i]==0)c++;
            else c=0;

            if(c==k){
                cnt++;
                i++;
                c=0;
            }
        }

        cout << cnt << endl;
        
    }
    return 0;
}