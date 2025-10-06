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
        ll n,k;
        cin >> n >>k;

        string s;
        cin >> s;

        vector <char> v(n+1,'.');

        ll i=1;
        ll j=n;

        ll cnt=0;
        for (ll x = 0; x < k; x++)
        {
            if(s[x]=='0'){
                v[i]='-';
                i++;
            } else if(s[x]=='1'){
                v[j]='-';
                j--;
            } else cnt++;
        }
        
        ll y=cnt;
        if(k>=n){
            for (ll i = 1; i <=n; i++)
            {
                v[i]='-';
            }
        } else {
            for (ll i = 1; i <= n; i++)
            {
                if(v[i]!='-' && y>0){
                    v[i]='?';
                    y--;
                } 

                if(y==0) break;
            }

            y=cnt;

            for (ll i = n; i >= 1; i--)
            {
                if(v[i]!='-' && y>0){
                    v[i]='?';
                    y--;
                }

                if(y==0) break;
            }
        }

        for (ll i = 1; i <= n; i++)
        {
            if(v[i]!='-' && v[i]!='?') {
                v[i]='+';
            } 
            cout << v[i];
        }
        
        newl;

    }
    

    return 0;
}