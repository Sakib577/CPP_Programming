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

ll fac(ll x)
{

    ll p = 1;
    for (ll i = 0; i < x; i++)
    {
        p *= i;
    }
    return p;
}

void solve(ll n, ll d)
{
    ll x = fac(n);

    cout << "1 ";

    if (n >= 3 || (d) % 3 == 0)
        cout << "3 ";

    if (d == 5)
        cout << "5 ";

    if (n >= 7 || abs(d*10+d-d*2)%7==0 || abs(-d)%7==0 || d==7)
        cout << "7 ";

    if (n >= 6 || (d) % 9 == 0)
        cout << "9 ";
    newl;
}

int main()
{
    fast_io;
    ll t;
    cin >> t;

    while (t--)
    {
        ll n, d;
        cin >> n >> d;

        if (n <= 21)
            solve(n, d);
        else
        {
            cout << "1 3 5 7 9" << endl;
        }
    }
    return 0;
}