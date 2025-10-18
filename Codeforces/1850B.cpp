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

        vector<pair<ll,ll>> v(n);
        for(auto &[i,j]: v) cin >> i>> j;

        ll MX=0;
        ll MXi=0;
        for (ll i = 0; i< n; i++)
        {
            if(v[i].second > MX && v[i].first<=10) {
                // deb(v[i].second);
                // deb(v[i].first);
                MX=v[i].second;
                MXi=i+1;
            }
        }
        cout << MXi << endl;
    }
    return 0;
}