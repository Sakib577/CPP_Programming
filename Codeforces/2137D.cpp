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

    while (t--)
    {
        ll n;
        cin >> n;
        unordered_map <ll,vector<ll>> freq;
        
        for (ll i = 0; i < n; i++)
        {
            ll in;
            cin >> in;
            freq[in].push_back(i);
        }
        bool yes=true;
        ll sum=0;
        for (auto &[key,val]: freq)
        {
            if(val.size()%key!=0)yes=false;
        }
        ll j=1;
        vector <ll> ans(n);
        if(yes){
            
            for (auto &[key,val]: freq)
            {
                for (ll i = 0; i < val.size(); i+=key)
                {
                    for (ll k = 0; k < key; k++)
                    {
                        ans[val[i+k]]=j;
                    }
                    j++;
                }
            }
            
            
            
            for (ll i = 0; i < n; i++)
            {
                cout << ans[i] << " ";
            }
            newl;
            
        } else cout << -1 << endl;
    }
    

    return 0;
}