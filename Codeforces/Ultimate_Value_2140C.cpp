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

        vector <ll> v;
        ll sum=0;
        
        for (ll i = 0; i < n; i++)
        {
            ll in;
            cin >> in;
            v.push_back(in);
            if(i&1){
                sum-=in;
            }
            else {
                sum+=in;
            }
        }

        ll res;
        if(n&1){
            res=sum+n-1;
        } else {
            if(v[0]==v[n-1])res=sum+n-1;
            else res=sum+n-2;
        }
             

        ll mxo=-1e10;
        ll mne=1e10;
        for (ll i = 0; i < n; i++)
        {
            if(i&1){
                res=max(res,sum+2*v[i]+i-mne);
                mxo=max(mxo,2*v[i]-i);
            } else {
                res=max(res,sum-2*v[i]+i+mxo);
                mne=min(mne,2*v[i]+i);
            }
        }
        cout << res << endl;
    }
    

    return 0;
}