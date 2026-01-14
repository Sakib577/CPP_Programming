#include <bits/stdc++.h>
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr)
#define all(v) v.begin(), v.end()
#define revall(v) v.rbegin(), v.rend()
#define deb(x) cout << #x << " = " << x << '\n';
#define newl cout << endl
#define endl "\n"
typedef long long ll;
typedef unsigned long long ull;
const ll M = 1e9+7;

using namespace std;

int main()
{
    fast_io;

        ll n;
        cin >> n;

        vector <ll> v(n),val(n);

        ll sum=0;
        ll MX=LLONG_MIN;
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];

            if(sum+v[i]>v[i])sum+=v[i];
            else sum=0;
            deb(sum);
            MX=max(MX,sum);
        }

        cout << MX << endl;


    return 0;
}