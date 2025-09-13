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
        ll n,k;
        cin >> n >> k;

        vector <ll> v(n);
        unordered_map<ll,ll> freq,lim;
        for(ll &i: v) {
            cin >> i;
            freq[i]++;
        }

        bool yes=true;
        for(auto &[key,val]: freq){
            if(val%k != 0){
                yes=false;
                break;
            } else{
                lim[key]=val/k;
            }
        }

        ll cnt=0;
        unordered_map <ll,ll> subarray;

        if(yes){
            ll l=0;
            for (ll r = 0; r < n; r++)
            {
                subarray[v[r]]++;
                while (subarray[v[r]]>lim[v[r]])
                {
                    subarray[v[l]]--;
                    l++;
                }
                cnt+=r-l+1;
            }
            
            cout << cnt << endl;    
        } else cout << 0 << endl;
        
        
    }
    

    return 0;
}