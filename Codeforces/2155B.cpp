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

ll binPow(ll a, ll b){
    ll res=1;
    while (b)
    {
        if(b&1) res*=a;
        a*=a;
        b>>=1LL;
    }
    return res;
}

int main()
{
    fast_io;
    ll t;
    cin >> t;

    while (t--)
    {
        ll n,k;
        cin >> n>>k;

        ll x=(binPow(n,2)-k);
        
        if(x==1){
            cout << "NO" << endl;
        } else {
            vector<vector<char>> v(n, vector<char>(n));

            ll p=0;
            for (ll i = 0; i < n; i++)
            {
                for (ll j = 0; j < n; j++)
                {
                    if(p<k){v[i][j]='U';
                        p++;
                    }
                    else {
                        if(i != n-1) v[i][j]='D';
                        else{
                            if(j==n-1)v[i][j]='L';
                            else v[i][j]='R';
                        }
                    }
                }
            }
            
            cout << "YES" << endl;
            for (ll i = 0; i < n; i++)
            {
                for (ll j = 0; j < n; j++)
                {
                    cout << v[i][j];
                }
                newl;
            }

            
        }

    }
    

    return 0;
}