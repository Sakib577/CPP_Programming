#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define all(v) v.begin(), v.end()
#define revall(v) v.rbegin(), v.rend()
typedef long long ll;

using namespace std;

int main()
{
    fast_io;
    ll t;
    cin >> t;

    while (t--)
    {
        ll n, k;
        cin >> n >> k;

        vector<ll> left(n);
        vector<ll> right(n);

        vector<ll> MINS;
        for (ll &x : left)
            cin >> x;
        for (ll &x : right)
            cin >> x;

        ll maxt = 0;
        for (ll i = 0; i < n; i++)
        {
            maxt += max(left[i], right[i]);
            MINS.push_back(min(left[i], right[i]));
        }
        sort(revall(MINS));

        ll mint = 0;
        for (ll i = 0; i < k - 1; i++)
        {
            mint += MINS[i];
        }

        cout << maxt + mint + 1 << endl;
    }
    return 0;
}