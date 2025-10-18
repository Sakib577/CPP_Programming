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

int main()
{

    fast_io;
    ll t;
    cin >> t;

    while (t--)
    {
        ll n, x;
        cin >> n >> x;

        bool no = false;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        for (ll i = 0; i < n;)
        {
            if (v[i] == 1 && x==0)
            {
                no=true;
                break;
            }
            else if (v[i] == 1)
            {
                i += x;
                x = 0;
            }
            else
                i++;
        }
        cout << ((no)?"NO":"YES") << endl;
    }
    return 0;
}