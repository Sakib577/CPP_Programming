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
        ll n;
        cin >> n;
        string s;

        cin >> s;

        map <ll,ll> freq;
        freq['a']=0;
        freq['b']=0;
        for (ll i = 0; i < n; i++)
        {
            freq[s[i]]++;
        }

        char del,keep;  
        bool yes=false;      
        if(freq['a']==freq['b']) cout << 0 << endl;
        else {
            ll psum=0;
            vector<ll> v(n+1);
            
            for (ll i = 0; i < n; i++)
            {
                if(s[i]=='a')psum++;
                else psum--;
                
                v[i+1]=psum;
            }
            

            ll D = freq['a'] - freq['b'];
            map<ll, ll> pp;
            pp[0] = 0;
            ll MN = n + 1;

            for (ll r = 1; r <= n; r++)
            {
                ll x = v[r] - D;
                if (pp.count(x))
                {
                    ll l = pp[x];
                    ll len = r - l;
                    MN = min(MN, len);
                }
                pp[v[r]] = r;
            }

            if (MN == n + 1 || MN == n) {
                cout << -1 << endl;
            } else {
                cout << MN << endl;
            }
            
            
        }
        

        
        
    }
    

    return 0;
}