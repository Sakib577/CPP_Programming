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
        ll n;
        cin >> n;

        vector <ll> v(n);
        for(ll &i: v) cin >> i;

        ll cnt=0;

        ll MX=LLONG_MIN;
        for (ll i = 0; i < n; i++)
        {
            if(i&1){
                if( MX>v[i])v[i]=MX;
            }
            
            MX=max(MX,v[i]);
        }
        
        for (ll i = 0; i < n-1; i++)
        {
            if(i&1){
                if(v[i] <= v[i+1]){
                    ll x=v[i+1]-v[i];
                    // deb(x);
                    // deb(i);
                    cnt+=x+1;
                    v[i+1]-=(x+1);
                    
                }
            }else{
                if(v[i] >= v[i+1]){
                    ll x=v[i]-v[i+1];
                    // deb(x);
                    // deb(i);
                    cnt+=x+1;
                    v[i]-=(x+1);

                }
            }
            
            
        }

        cout << cnt << endl;
        
    }
    

    return 0;
}