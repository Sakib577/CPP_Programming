#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
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
        ll x, y, z;
        x = 1;
        y = 1;
        z = n;

        ll num=n-1+n-2;
        cout << num << endl;
        for (ll i = 0; i < n - 1; i++)
        {
            cout << x <<" " <<  y <<" " << z << endl;
            x++;
            z--;
        }
        x=n;y=2;z=n;
        for (ll i = 0; i < n-2; i++)
        {
            cout << x<<" " << y <<" " << z  << endl;
            x--;
            y++;
        }
        
    }
    return 0;
}