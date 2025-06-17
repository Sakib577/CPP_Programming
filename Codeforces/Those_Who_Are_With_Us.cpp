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
        ll n,m;
        cin >> n>> m;

        vector <vector <ll>> v(n,vector<ll>(m));
        ll MX=0;
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < m; j++)
            {
                cin >> v[i][j];
                if(v[i][j] > MX) MX=v[i][j];
            }
        }
        
        
        ll xi,MXi=0;
        for (ll i = 0; i < n; i++)
        {
            ll cnt=0;
            for (ll j = 0; j < m; j++)
            {
                if(v[i][j] == MX){
                    cnt++;
                }
            }
            if(MXi< cnt){
                MXi=cnt;
                xi=i;
            }
        }

        ll xj,MXj=0;
        for (ll i = 0; i < m; i++)
        {
            ll cnt=0;
            for (ll j = 0; j < n; j++)
            {
                if(v[j][i] == MX){
                    cnt++;
                }
            }
            if(MXj< cnt){
                MXj=cnt;
                xj=i;
            }
        }
        deb(xi);
        deb(xj);
        bool h=false;
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < m; j++)
            {
                if(v[i][j]==MX && (i!=xi || j!=xj)) {
                    h=true;
                }
            }
        }
        cout << (h?MX:(MX-1)) << endl;
    }
    return 0;
}