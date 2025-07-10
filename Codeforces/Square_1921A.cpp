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
        vector <pair<ll,ll>> v(4);
        for (ll i = 0; i < 4; i++)
        {
            cin >> v[i].first >> v[i].second;
        }
        
        ll x;
        for (ll i = 1; i < 4; i++)
        {
            if(v[i].first==v[0].first){
                x=(v[0].second-v[i].second);
            }
        }
        cout << x*x << endl;
    }
    return 0;
}