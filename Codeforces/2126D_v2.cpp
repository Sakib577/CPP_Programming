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

bool comp(pair<ll,pair<ll,ll>> a,pair<ll,pair<ll,ll>> b){
    // if(a.first == b.first){
    //     if(a.second.first == b.second.first) return a.second.second < b.second.second;
    //     else return a.second.first < b.second.first;
    // } else return a.first < b.first;
    return a.second.second < b.second.second;
}

int main()
{
    fast_io;
    ll t;
    cin >> t;

    while (t--)
    {
        ll n,k;
        cin >>n >>k;

        vector <pair<ll,pair<ll,ll>>> l(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> l[i].first >> l[i].second.first >> l[i].second.second; 
        }
        
        sort(all(l),comp); // just pass function name, NOT comp()

        for (ll i = 0; i < n; i++)
        {
            // deb(l[i].first);
            // deb(l[i].second.first);
            // deb(l[i].second.second);
            // deb(k);
            if(l[i].first <= k && l[i].second.first >= k) {
                k=max(k,l[i].second.second);
            }
        }
        
        cout << k << endl;
    }
    return 0;
}