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

bool comp(array<ll,3> a,array<ll,3> b){
    return a[2] < b[2];
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

        vector <array<ll,3>> l(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> l[i][0] >> l[i][1] >> l[i][2]; 
        }
        
        sort(all(l),comp); // just pass function name, NOT comp()

        for (ll i = 0; i < n; i++)
        {
            if(l[i][0] <= k && l[i][1] >= k) {
                k=max(k,l[i][2]);
            }
            
        }
        
        cout << k << endl;
    }
    return 0;
}