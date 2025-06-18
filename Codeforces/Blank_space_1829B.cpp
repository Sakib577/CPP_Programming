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

        ll cnt=0;
        ll MX=0;
        for (ll i = 0; i < n; i++)
        {
            ll in;
            cin >> in;
            if (in==0)
            {
                cnt++;
                if(cnt>MX) MX=cnt;
            } else cnt=0;   
        }
        cout << MX << endl;
    }
    return 0;
}