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
    ll n;
    cin >> n;

    vector <pair<ll,ll>> v;

    for (ll i = 0; i < n; i++)
    {
        ll a,b;
        cin >> a >> b;

        v.push_back({a,0});
        v.push_back({b,1});
    }
    
    ll MX=0;
    ll cnt=0;
    sort(all(v));
    
    
    for (ll i = 0; i < v.size(); i++)
    {
        MX=max(MX,cnt);
        if(v[i].second==1) cnt--;
        else cnt++;
    }
    cout << MX << endl;

    return 0;
}