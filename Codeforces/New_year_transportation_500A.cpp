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
    ll n,t;
    cin >> n >> t;

    vector <ll> v(n-1);
    for(ll &i: v) cin >> i;

    ll j=1;
    while (j <= t)
    {
        if (v[j-1]+j > t) break;
        
        j=v[j-1]+j;
        if (j==t)
        {
            cout << "YES" << endl;
            exit(0);
        }
    }
    cout << "NO" << endl;
    return 0;
}