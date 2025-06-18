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
    ll n,k;
    cin >> n>> k;

    vector <ll> p(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    

    ll count=0;
    ll x=5-k;
    for (ll i = 0; i < n; i++)
    {
        if(p[i] <= x)
        count++;
    }
    
    cout << count/3 << endl;
    return 0;
}