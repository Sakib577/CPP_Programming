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
        ll n,q;
        cin >> n>>q;

        string s;
        cin >> s;

        vector <ll> v(q);
        for(ll &i: v)cin >> i;


        if(find(all(s),'B')==s.end()){
            for (ll i = 0; i < q; i++)
            {
                cout << v[i] << endl;
            }
            
        }else {
            ll A=0;
            vector <ll> t;
            for (ll i = 0; i < n; i++)
            {
                if(s[i]=='A'){
                    A++;
                    if(i==n-1){
                        if(A!=0){
                        t.push_back(A);
                        }
                    }   
                }else{
                    if(A!=0){
                        t.push_back(A);
                    }
                        A=0;
                        t.push_back(-1);
                }
                
            }   
            
            for (ll i = 0; i < q; i++)
            {
                ll cnt=0;
                ll j=0;
                while (v[i]>0)
                {
                    if(t[j]!=-1){
                        ll h=min(t[j],v[i]);
                        cnt+=h;
                        // deb(h);
                        v[i]-=h;
                    }else {v[i]/=2;
                        cnt++;
                    }
    
                    j++;
                    if(j==t.size())j=0;
                }
                cout << cnt << endl;
            }

        }


        
    }
    

    return 0;
}