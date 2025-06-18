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

bool isPrime(ll x)
{
    for (ll i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
            return false;

    }
    return true;
}

int main()
{
    fast_io;
    ll t;
    cin >> t;

    ll a = floor((double)t / 2);
    ll b = ceil((double)t / 2);
    for (ll i = 0; i < t / 2; i++)
    {
        if (a + b == t && !isPrime(a) && !isPrime(b))
        {
            cout << a << " " << b << endl;
            break;
        }
            a--;
            b++; 
              
    }

    return 0;
}