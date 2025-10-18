#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
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
    
    while(t--){
        ll n;
        cin >> n;
        
        vector <ll> v(n);
        
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        ll MN=INT64_MAX;
        for (ll i = 0; i < n; i++)
        {
            ll cnt =0;
            ll j;
            for (j = i; j < n; j++)
            {
                if (v[i]==v[j])
                {
                    cnt++;
                } else break;
            }
            ll x=v[i]*(n-cnt);
            if (x< MN)
            {
                MN=x;
            }
            i=j-1;
            
        }
        cout << MN << endl;
        
    }
    return 0;
}