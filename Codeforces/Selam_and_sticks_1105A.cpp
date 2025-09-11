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

    vector <ll> v(n);
    ll mni=LLONG_MAX;
    ll mxi=-1;
    for(ll &i: v) {
        cin >> i;
        mni=min(mni,i);
        mxi=max(mxi,i);
    }

    pair<ll,ll> MN={-1,LLONG_MAX};
    for (ll t = mni; t <= mxi ; t++)
    {
        ll cost=0;
        for (ll i = 0; i < v.size(); i++)
        {
            if(abs(v[i]-t)>1){
                cost+=abs(v[i]-t)-1;
            }
        }
        if(MN.second>cost){
            MN.second=cost;
            MN.first=t;
        }
        
    }
    

    cout << MN.first << " " << MN.second << endl;
    return 0;
}