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

    vector <pair<ll,ll>> v(t);

    for (ll i = 0; i < t; i++)
    {
        cin >> v[i].first >> v[i].second;
    }
    
    sort(all(v),[](auto &a, auto &b){
        return a.second < b.second;
    });

    ll pe=v[0].second;
    ll cnt=1;
    
    for (ll i = 1; i < t; i++)
    {
        if(v[i].first>=pe){cnt++;pe=v[i].second;}
    }
    
    cout << cnt << endl;

    return 0;
}