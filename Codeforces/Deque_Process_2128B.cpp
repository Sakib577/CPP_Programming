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
        cin >>n;

        string s;

        vector <ll> v(n);
        
        
        for(auto &i: v) cin >> i;

        for (ll i = 0,j=n-1,k=0; i < n; i++)
        {
            if(i&1) {
                if(v[k]>v[j]){
                    s+="L";
                    k++;
                } else {
                    s+="R";
                    j--;
                }
                
            }
            else {
                if(v[k]<v[j]){
                    s+="L";
                    k++;
                } else {
                    s+="R";
                    j--;
                }
            }
        }

        cout << s << endl;
        
    }
    return 0;
}