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
    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        string s;
        vector <ll> v(n);

        for (ll i = n-1; i >= 0; i--)
        {
            cin >> s;
            auto it=find(all(s), '#');
            ll in=it-s.begin()+1;
            v[i]=in;
        }

        for(ll i: v) cout << i << " ";
        newl;
    }
    return 0;
}
