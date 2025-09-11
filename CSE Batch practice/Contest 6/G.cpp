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
    
    ll n,a,b;
    cin >> n>> a >> b;

    
    ll minweek=min({a/2,b/2,n/3});
    ll res=minweek*7;

    n-=minweek*3;
    a-=minweek*2;
    b-=minweek*2;

    vector <ll> v={0,0,1,2,0,2,1};
    ll MX=0;
    for (ll i = 0; i < 7; i++)
    {
        ll rn=n;
        ll ra=a;
        ll rb=b;
        ll d=0;
        
        ll extra=0;
        ll day=i;
        while (true)
        {
            ll dish=v[day%7];
            if(dish==0 && rn==0) break;
            if(dish==1 && ra==0) break;
            if(dish==2 && rb==0) break;

            if(dish==0) rn--;
            if(dish==1) ra--;
            if(dish==2) rb--;

            d++;
            day++;
        }
        MX=max(d,MX);
    }
    res+=MX;
    cout << res << endl;

    return 0;
}