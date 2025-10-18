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
        ll n;
        cin >>n;

        vector <ll> v(n);
        for(ll &i: v) cin>> i;

        bool yes= true;
        ll MN=LLONG_MAX;
        for (ll i = 0; i < n; i++)
        {
            if(v[i]<MN) MN=v[i];
            if(2*MN <= v[i]) {
                yes= false;
                break;
            }
        }
        
        cout << (yes?"YES":"NO") << endl;
    }
    return 0;
}