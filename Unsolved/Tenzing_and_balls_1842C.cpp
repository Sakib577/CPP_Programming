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
        vector <ll> v(n);
        for(ll &i: v) cin >> i;

        vector <pair<ll,ll>> dp;
        for (ll i = 0; i < n; i++)
        {
            for (ll j = n-1; j > i; j--)
            {
                if(v[i]==v[j]){
                    dp.push_back({i,j});
                    break;
                }
            }
        }
        if(dp.empty()){
            cout << 0 << endl;
            continue;
        }
        
        ll sum=dp[0].second-dp[0].first+1;
        ll cnt;
        
        for (ll i = 0; i < dp.size()-1; i++)
        {
            ll j=i+1;
            cnt=dp[j].second-dp[j].first+1;
            if(dp[i].second >= dp[j].first){
                if(sum < cnt) sum=cnt;
            } else {
                sum+= cnt;
            }
        }
        cout << sum << endl;
    }
    return 0;
}