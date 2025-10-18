#include <bits/stdc++.h>
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr)
#define all(v) v.begin(), v.end()
#define revall(v) v.rbegin(), v.rend()
#define deb(x) cout << #x << " = " << x << '\n';
#define newl cout << endl
typedef long long ll;
typedef __int128_t ll128;
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
        vector<array<ll, 4>> v(n);

        for (ll i = 0; i < n; i++)
        {
            cin >> v[i][0];
            cin >> v[i][1];
            cin >> v[i][2];
            cin >> v[i][3];
        }
        
        ll cnt=0;

        for (ll i = 0; i < n; i++)
        {
            if(v[i][0] > v[i][2]){
                cnt+=v[i][0]-v[i][2];
                
            }
        
            if(v[i][1] > v[i][3]){
                cnt+=v[i][1]-v[i][3] + ((v[i][0] > v[i][2])?v[i][0]-(v[i][0]-v[i][2]):v[i][0]);
                
            }
        
            
        }

        cout << cnt << endl;
    }

    return 0;
}