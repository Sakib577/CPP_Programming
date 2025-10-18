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
        string n;
        cin >> n;

        ll x=n[0]-'0';
        ll y=n.size();
        ll i=1;
        ll j=1;

        ll cnt=0;
        while (i <= x)
        {
            if (i!=x)
            {
                cnt+=10;
            } else {
                while (j<=y)
                {
                    cnt+=j;
                    j++;
                }
            }
            i++;
        }
        
        cout << cnt << endl;
    }
    
    return 0;
}