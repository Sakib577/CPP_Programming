#include <bits/stdc++.h>
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr)
#define all(v) v.begin(), v.end()
#define revall(v) v.rbegin(), v.rend()
#define deb(x) cout << #x << " = " << x << '\n'
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
        ll a,b,c,n;
        cin >> a>> b>> c>>n;

        ll MX=max({a,b,c});
        ll need=(MX-a)+(MX-b)+(MX-c);

        ll x=n+a+b+c;
        cout << ((n>=need && x%3 == 0)?"YES":"NO") << endl;
    }
    return 0;
}