#include <bits/stdc++.h>
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr)
#define all(v) v.begin(), v.end()
#define revall(v) v.rbegin(), v.rend()
#define deb(x) cout << #x << " = " << x << '\n'
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
        string s;
        cin >> s;

        bool yes= false;
        for (ll i = 1; i <n-1; i++)
        {
            ll x=count(all(s),s[i]);
            if(x>1) {
                yes=true;
                break;
            }
        }
        cout << (yes?"Yes":"No") << endl;
    }
    return 0;
}