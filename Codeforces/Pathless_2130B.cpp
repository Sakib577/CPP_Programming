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
        ll n,s;
        cin >>n>>s;


        vector <ll> v(n);

        ll sum=0;
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
            sum+=v[i];
        }

        if(sum>s) cout << -1 << endl;
        else{
            
        }
    }
    return 0;
}