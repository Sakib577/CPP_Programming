#include <bits/stdc++.h>
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr)
#define all(v) v.begin(), v.end()
#define revall(v) v.rbegin(), v.rend()
#define deb(x) cout << #x << " = " << x << '\n'
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
        ll n,k;
        cin >> n>> k;
        vector<ll> a(n),b(n);
        for(ll &i: a) cin >> i;
        for(ll &i: b) cin >> i;
        
        ll sum=0;
        for(ll i: a) sum+=i;

        sort(all(a));
        sort(all(b));
        ll j=n-1;
        for (ll i = 0; i < k; i++)
        {
            if (a[i]<b[j])
            {
                sum-=a[i];
                sum+=b[j];
                j--;
            } else break;
        }
        
        cout << sum << endl;
    }
    return 0;
}