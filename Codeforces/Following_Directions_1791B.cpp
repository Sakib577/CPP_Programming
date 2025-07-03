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
        ll n;
        cin >> n;
        string s;
        cin >> s;

        ll x=0,y=0;

        bool yes=false;
        for (ll i = 0; i < n; i++)
        {
            switch (s[i])
            {
            case 'L':
                x--;
                break;
            case 'R':
                x++;
                break;
            case 'U':
                y++;
                break;
            case 'D':
                y--;
                break;

            default:
                break;
            }
            if(x==1 && y==1){
                yes= true;
                break;
            }
        }

        cout << (yes?"YES":"NO") << endl;
        
    }
    return 0;
}