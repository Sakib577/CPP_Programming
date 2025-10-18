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

    char c;
    cin >> c;

    string s, t = "";
    cin >> s;

    string keys = "qwertyuiopasdfghjkl;zxcvbnm,./";

    if (c == 'R')
    {
        for (ll i = 0; i < s.size(); i++)
        {
            ll j = 0;
            while (s[i] != keys[j])
            {
                j++;
            } t += keys[j - 1];
        }
    }
    else
    {
        for (ll i = 0; i < s.size(); i++)
        {
            ll j = 0;
            while (s[i] != keys[j] && j < keys.size())
            {
                j++;
            }t += keys[j + 1];
        }
    }

    cout << t << endl;

    return 0;
}