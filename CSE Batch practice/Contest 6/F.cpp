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

    vector <pair<array<ll,2>,ll>> v(t);

    for (ll i = 0; i < t; i++)
    {
        cin >> v[i].first[0] >> v[i].first[1];
        v[i].second=i+1;
    }
    
    sort(all(v),[](auto &a,auto &b){
        __int128_t x=a.first[0]*(b.first[0]+b.first[1]);
        __int128_t y=b.first[0]*(a.first[0]+a.first[1]);
        if(x==y) return a.second < b.second;
        return x>y;
    });
    
    for (ll i = 0; i < t; i++)
    {
        cout << v[i].second << " ";
    }
    
    newl;

    return 0;
}