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
        ll n,x;
        cin >> n>> x;

        vector <ll> v(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(all(v));
        
        ll s=0;
        ll b=0;
        ll llv=0;
        for (ll i = 0; i < n; i++)
        {
            s+=v[i];
            ll d=s/x;

            if(d>llv)b+=v[i];

            llv = d;
        }
        cout << b << endl;

        for (ll i = 0; i < n; i++)
        {
            cout << v[i] << " ";
        } newl;
        
    }
    

    return 0;
}