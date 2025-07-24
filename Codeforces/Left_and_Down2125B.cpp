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

int main()
{
    fast_io;
    ll t;
    cin >> t;

    while (t--)
    {
        ll a,b,k;
        cin >> a >> b >> k;

        if(max(a,b) <= k) cout << 1 << endl;
        else{
            ll gc=gcd(a,b);
            if(a/gc <= k && b/gc <= k){
                cout << 1 << endl;
            }else{
                cout << 2 << endl;
            }
        }
    }
    return 0;
}