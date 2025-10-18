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
        string s;
        cin >> s;

        if (s.size() & 1)
            cout << "NO" << endl;
        else
        {
            ll half = s.size() / 2;
            string y = s.substr(half, half);
            string x = s.substr(0, half);
            if (x == y)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }

    return 0;
}