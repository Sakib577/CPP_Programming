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
        ll n,k;
        cin >>n >>k;

        vector <pair<ll,pair<ll,ll>>> l(n);
        for (ll i = 0; i < n; i++)
        {
            ll x,y,z;
            cin >> l[i].first >> l[i].second.first >> l[i].second.second; 
        }
        
        sort(all(l),[](auto &a,auto &b){
            return ((a.first < b.first && a.second.first > b.second.first)? a.first < b.first && a.second.first > b.second.first:a.first < b.first);
        });

        for (ll i = 0; i < n; i++)
        {
            // deb(l[i].first);
            // deb(l[i].second.first);
            // deb(l[i].second.second);
            // deb(k);
            if(l[i].first <= k && l[i].second.second > k) {k+=l[i].second.first;
                k-=l[i].first;
            }
            else {
                break;
            }
        }
        
        cout << k << endl;
    }
    return 0;
}