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
        ll a,b,c;
        cin >> a>> b>> c;

        ll MIN= min({a,b,c});
        ll MAX= max({a,b,c});

        if(a != MIN && a!=MAX)
        cout << a << endl;
        else if(b != MIN && b!=MAX)
        cout << b << endl;
        else
        cout << c << endl;
    }
        
    return 0;
}