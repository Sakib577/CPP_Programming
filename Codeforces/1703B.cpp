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

        map <char, ll > freq;
        for (ll i = 0; i < n; i++)
        {
            char c;
            cin >> c;
            freq[c]++;
        }
        
        ll cnt=0;
        for( auto [key,val]: freq) cnt+= val+1;

        cout << cnt << endl;
    }

    return 0;
}