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
    ll n;
    cin >> n;

    vector <ll> v(n-1);
    for(ll &i: v)cin >> i;

    sort(all(v));
    ll res;
    for (ll i = 0; i < n; i++)
    {
        if(v[i]!=i+1) {
            res=i+1;
            break;
        }
    }
    
    cout << res << endl;
    return 0;
}