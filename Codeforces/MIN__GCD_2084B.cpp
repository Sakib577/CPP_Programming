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
        vector <ll> v(n);
        for(ll &i: v) cin >> i;

        ll MN= *min_element(all(v));
        ll cntm= count(all(v),MN);

        bool yes=false;
        if(cntm > 1) yes=true;
        else{
            vector <ll> x;
            for (ll i = 0; i < n; i++)
            {
                
                if(v[i] != MN && v[i]%MN==0){
                    x.push_back(v[i]);
                }
            }
            if(!x.empty()){
            ll  g=x[0];
            for (ll i = 0; i < x.size(); i++)
            {
                g =gcd(g,x[i]);
            }
            
            if(g==MN) yes=true;
        }
        }
        
        cout << (yes?"Yes":"No") << endl;
    }
    return 0;
}