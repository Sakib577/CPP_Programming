#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define all(v) v.begin(),v.rend()
#define revall(v) v.rbegin(),v.rend()
#define deb(x) cout << #x << " = " << x << "\n";
#define newl cout << endl;
typedef long long ll;
#define  ll128 __int128_t
typedef unsigned long long ull;
using namespace std;

int main(){
    fast_io;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        vector <ll> v(n);
        if(n<4) {
            cout << -1 << endl;
            continue;
        }
        else {
            if(n&1){
                for (ll i = 0; i < n; i++)
                {
                    v[i]=i+1;
                }
                
                swap(v[n-1],v[n-4]);
            } else {
                for (ll i = 0; i < n; i++)
                {
                    v[i]=i+1;
                }
                
                swap(v[n-2],v[n-3]);
            }
        }

        for (ll i = 0; i < n; i++)
        {
            cout << v[i] << " ";
        }
        newl;
    
    }
    return 0;
}