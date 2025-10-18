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
        ll n,m;
        cin >> n>> m;

        vector<ll> a(n+1);
        vector<ll> b(n+1);

        a[0]=b[0]=0;
        for (ll i = 1; i < n+1; i++)
        {
            cin >> a[i] >> b[i];
        }
        
        ll cnt=0;
        for (ll i = 0; i < n; i++)
        {
            if(abs(a[i]-a[i+1])&1){
                if(b[i]==b[i+1]){
                    cnt+=abs(a[i]-a[i+1])-1;
                } else cnt+=abs(a[i]-a[i+1]);
            } else {
                if(b[i]!=b[i+1]){
                    cnt+=abs(a[i]-a[i+1])-1;
                } else cnt+=abs(a[i]-a[i+1]);
            }
        }
        if(a[n]<m){
            cnt+=m-a[n];
        }

        cout << cnt << endl;
        
    }
    

    return 0;
}