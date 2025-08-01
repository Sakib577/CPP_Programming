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

        vector <ll> v(n),b(n);
        for(ll &i: v) cin >> i;

        if(n==1) {
            cout << -1 << endl;
        } else {
            for (ll i = 0; i < n; i++)
            {
                if(i&1) b[i]=1;
                else b[i]=0;
            }

            for (ll i = 0; i < n; i++)
            {
                if(v[i]==1 && b[i]==1){
                    if(i<n-1){
                        ll j=i+1;
                        while (v[j]!=0)
                        {
                            j++;
                        }
                        swap(b[i],b[j]);
                        break;
                    } else {
                        b[i]=0;
                        break;
                    }
                } else if(v[i]!=b[i]){
                    break;
                }
            }            
            
            for(ll i:b) cout << i << " ";
            newl;
        }
    }
    return 0;
}