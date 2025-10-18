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

    while (t--)
    {
        ll n;
        cin >> n;

        vector <ll> v(n);

        for(ll &i: v) cin >> i;

        // auto MXin=max_element(all(v));
        // auto MNin=min_element(all(v));
        // ll MX=*MXin;
        // ll MN=*MNin;
        ll mx=0;
        ll mn=LLONG_MAX;
        vector <ll> vx(n);
        for (ll i = 0; i < n; i++)
        {
            // if(i == 0 || i== n-1 || v[i]==MX || v[i]==MN){
            //     vx[i]=1;
            // }
            if(v[i] < mn){
                 vx[i]=1;
                 mn=v[i];
            }
        }
        for (ll i = n-1; i >=0; i--)
        {
            if(v[i]>= mx) {
                vx[i]=1;
                mx=v[i];
            }
        }
        
        
        for(ll i:vx) cout << i;
        newl;
    }
    return 0;
}