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

// bool isprime(ll x){

//     if(x<2)return false;
//     for(ll i = 2; i*i <= x; i++)
//     {
//         if(x%i==0) return false;
//     }
//     return true;
// }

int main()
{
    fast_io;
    ll t;
    cin >> t;

    while (t--)
    {
        ll l ,r;
        cin >> l >> r;

        ll cnt=0;
        for (ll i = l; i <= r; i++)
        {
            if(i%2 != 0 && i%3!=0 && i%5 !=0 && i%7 !=0)cnt++;
        }

        cout << cnt << endl;
    }
    return 0;
}