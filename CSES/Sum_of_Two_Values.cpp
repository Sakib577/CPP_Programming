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
    ll n,sum;
    cin >> n>> sum;
    vector <pair<ll,ll>> v(n);

    for(ll i=0;i<n; i++) {
        cin >> v[i].first;
        v[i].second=i+1;
    }

    sort(all(v));
    ll i=0;
    ll j=n-1;
    bool yes=false;
    while (i<j)
    {
        if(v[i].first+v[j].first==sum){
            yes=true;
            break;
        } else if(v[i].first+v[j].first>sum) j--;
        else i++;
    }
    
    if(yes)cout << min(v[i].second,v[j].second) << " " << max(v[i].second,v[j].second) << endl;
    else cout << "IMPOSSIBLE" << endl;
    
    return 0;
}