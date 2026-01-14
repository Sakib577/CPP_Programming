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
    ll t;
    cin >> t;

    while (t--)
    {
        ll r,x,d,n;
        cin >> r>> x >> d >>n;

        string s;
        cin >> s;

        ll cnt=0;
        for (ll i = 0; i < n; i++)
        {
            if(s[i]=='1'){
                cnt++;
                if(r>=x){
                    r-=d;
                    if(r<0)r=0;
                }
            } else {
                if(r<x)cnt++;
            }

        }
        cout << cnt << endl;
    }
    

    return 0;
}