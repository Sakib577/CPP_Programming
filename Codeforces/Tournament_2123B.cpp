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
        ll n,j,k;
        cin >> n>> j>> k;

        vector <ll> v(n);

        for(ll &i: v) cin >> i;

        ll x=v[j-1];
        sort(revall(v));

        bool yes= false;
        if(k > 1) yes=true;
        else {
            if(v[0]==x) yes =true;
        }

        cout << ((yes)?"YES":"NO") << endl;
        
    }
    return 0;
}