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
        ll x, y, n;
        cin >> x >> y >> n;

        ll d = n / x;
        if (y == 0)
        {

            cout << d * x << endl;
        }
        else if (d * x + y <= n)
        {
            cout << d * x + y << endl;
        }
        else
        {
            cout << d * x - (x - y) << endl;
        }
    }
    return 0;
}