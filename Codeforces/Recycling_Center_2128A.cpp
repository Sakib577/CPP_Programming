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
        ll n,c;
        cin >>n >>c;

        vector <ll> v(n);
        
        for(ll &i: v) cin >> i;

        ll p=1;

        sort(revall(v));
        ll sum=0;
        ll j=1;
        for (ll i = 0; i < n; i++)
        {

            // deb(v[i]);
            // deb(j);
            
            //if(j<2){
                if(v[i]*(j)>c) sum+=1;
                if(v[i]*(j)<=c) j*=2;
            // } else {
            //     if(v[i]*(j)>c) sum+=1;
            //     j*=2;
            // }
            //deb(sum);
        }
        
        cout << sum << endl;
        
    }
    return 0;
}