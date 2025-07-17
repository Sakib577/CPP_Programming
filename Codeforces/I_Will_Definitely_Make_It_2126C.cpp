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
        cin >>n >>k;

        vector <ll> v,d(n);
        set<ll> s;
        for (ll i = 0; i <n; i++)
        {
            ll in;
            cin>>in;
            d[i]=in;
        }
        
        for (ll i = 0; i < n; i++)
        {
            if(d[i]>=d[k-1])
            s.insert(d[i]);
        }
        
        
        for (ll i: s)
        {
            v.push_back(i);
        }
        
        ll cnt=0;
        bool yes=true;

        ll x=0;
        for (ll i = 0; i < v.size()-1; i++)
        {
            
            x=v[i+1]-v[i];

            cnt+=x;

            // deb(v[i+1]);
            // deb(v[i]);
            // deb(cnt);
            if(v[i]<cnt){
                yes=false;
                break;
            }
        }
        
        
        cout << (yes?"YES":"NO") << endl;
    }
    return 0;
}