#include <iostream>
#include <set>
#include <algorithm>
#include <map>
#include <climits>
#include <vector>
#include <unordered_map>
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

        vector<ll> v(n);
        ll MX = 0;
        ll MXI, MNI;
        ll MN = LLONG_MAX;
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] > MX)
            {
                MX = v[i];
                MXI = i;
            }
            if (v[i] < MN)
            {
                MN = v[i];
                MNI = i;
            }
        }
        ll cnt = 0;
        bool yes = false;
        for (ll i = 0; i < n - 1; i++)
        {
            if (abs(v[i] - v[i + 1]) <= 1)
            {
                yes = true;
                cnt = 0;
                continue;
            }
        }

        // deb(yes);

        if (!yes)
        {
            for (ll i = 0; i < n - 2; i++)
            {
                if ((v[i] < v[i + 1] && v[i + 1] > v[i + 2]) || (v[i] > v[i + 1] && v[i + 1] < v[i + 2]))
                {
                    yes = true;
                    cnt = 1;
                }
            }
        }

        // ll MNcnt=LLONG_MAX;
        // if (!yes)
        // {
        //     for (ll i = 0; i < n; i++)
        //     {56 48 41 1
        //         if(v[i] <= MX && v[i] >= MN){
        //             if (abs(MNI-i)!=0 && abs(MXI-i)!=0 && (MNcnt > abs(MNI-i) || MNcnt > abs(MXI-i)))
        //             {
        //                 MNcnt=min(abs(MNI-i),abs(MXI-i));
        //             }
        //         }
        //     }
        // }

        // deb(yes);
        cout << (yes ? cnt : -1) << endl;
    }
    return 0;
}
