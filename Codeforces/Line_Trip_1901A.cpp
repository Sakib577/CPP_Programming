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
        ll n,x;
        cin >> n>> x;
        vector <ll> v(n+2);

        v[0]=0;
        v[n+1]=x;
        for (ll i = 1; i < n+1; i++)
        {
            cin >> v[i];
        }
        
        ll diff;
        ll MX=0;
        for (ll i = 1; i < n+2; i++)
        {
            if(i!=n+1) diff=v[i]-v[i-1];
            else diff=(v[i]-v[i-1])*2;
            if(MX<diff) MX=diff;
        }
        cout << MX << endl;
    }
    return 0;
}