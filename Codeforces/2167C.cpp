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
        
        bool odd=false;
        bool even=false;
        for(ll &i: v) {
            cin >> i;
            if(i&1)odd=true;
            else even=true;
        }

        if(odd && even){
            sort(all(v));
        }

        for (ll i = 0; i < n; i++)
        {
            cout << v[i] << " ";
        }newl;
        
    }
    

    return 0;
}