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

        ll fe=0;
        ll fo=0;
        for (ll i = 0; i <n; i++)
        {
            ll in;
            cin >> in;
            if ((i&1) != (in&1))    // parenthesis is important
            {
                if(in&1) fo++;
                else fe++;
            }
        }

        if (fe!=fo)
        {
            cout << -1 << endl;
        } else {
            cout << fe << endl;
        }
        
    }
    return 0;
}