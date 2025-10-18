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
        vector<string> s(8);
        for (string &t : s)
            cin >> t;

        string ans = "";
        ll in=LLONG_MIN;
        for (ll i = 0; i < 8; i++)
        {
            for (ll j = 0; j < 8; j++)
            {
                if (s[i][j] != '.')
                {
                    in = j;
                    break;
                }
            }
            if(in >= 0){
                for (ll j = 0; j < 8; j++)
                    {
                        if (s[j][in] != '.')
                            ans += s[j][in];
                    }
                    break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}