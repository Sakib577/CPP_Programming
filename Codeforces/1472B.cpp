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
    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;    
        vector <ll> v(n);
        ll sum=0;
        bool yes= false;

        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
            sum+=v[i];
        }
        ll cnt2 = count(all(v),2);
        ll cnt1 = count(all(v),1);
        if(!(sum&1)){
            if((cnt2&1) && (cnt1 >=2)) yes= true;
            else if(!(cnt2&1)) yes= true;
            // deb(cnt2);
            // deb(cnt1);
        }
        
        cout << (yes?"YES":"NO") << endl;
    }
    return 0;
}