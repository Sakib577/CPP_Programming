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

    ll sum=0;
    vector <ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        sum+=v[i];
        v[i]=sum;
    }

    ll m;
     cin >> m;
    while (m--)
    {
        ll in;
        cin >> in;

        ll res= lower_bound(all(v),in)-v.begin()+1;
        cout << res << endl;
    }
    
    
    return 0;
}