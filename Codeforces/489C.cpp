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
    ll m, s;
    cin >> m >> s;
    ll e = s;
    vector<ll> v(m);

    if (s == 0 && m == 1)
    {
        cout << "0 0" << endl;
    }
    else if (s > m * 9 || s == 0)
    {
        cout << "-1 -1" << endl;
    }
    else
    {
        ll y = 9;
        for (ll i = 0; i < m; i++)
        {
            if (s >= y)
            {
                v[i] = y;
                s -= y;
            }
            else
            {
                y--;
                i--;
            }
        }
        vector<ll> vm(m);

        y = 0;
        ll q = 9;

        ll d = 1;
        for (ll i = 0; i < m; i++)
        {
            if (i == 0 && d <= 9)
            {
                if ((e - d) <= (m - i - 1) * q)
                {
                    vm[i] = d;
                    e -= d;
                }
                else
                {
                    d++;
                    i--;
                }
            }
            else if ((e - y) <= (m - i - 1) * q)
            {
                vm[i] = y;
                e -= y;
            }
            else
            {
                y++;
                i--;
            }
        }
        // if(vm[0]==0){
        //     for (ll i = 1; i < m; i++) {
        //     if (vm[i] != 0) {
        //         swap(vm[0], vm[i]);
        //         break;
        //     }
        // }}

        for (ll &i : vm)
            cout << i;
        cout << " ";
        for (ll &i : v)
            cout << i;
        newl;
    }
    return 0;
}
