#include <bits/stdc++.h>
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr)
#define all(v) v.begin(), v.end()
#define revall(v) v.rbegin(), v.rend()
#define deb(x) cout << #x << " = " << x << '\n';
#define newl cout << endl
typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{

    fast_io;
    ll n,t;
    cin >> n >> t;

    ll MX = 0;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    ll i=0,j=0;
    ll sum=0;
    while (i < n && j <n)
    {
        if (sum+v[j] <= t)
        {
            sum+=v[j];
            j++;
            ll x= j-i;
            MX = max(x,MX);
        } else {
            sum-=v[i];
            i++;
        }
        
    }
    
    cout << MX << endl;

    return 0;
}