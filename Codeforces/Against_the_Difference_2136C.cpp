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

void printBin(ll n){
    cout << bitset<64>(n).to_string().substr(64-10) << endl;
}

bool checkPow2(ll n){
    if(n&(n-1)) return false;
    else return true;
}

ll powof2(ll n){
    return 1LL<<n;
}

bool isPrime(ll n){
    if(n<2) return false;
    else for (ll i = 2; i*i <= n; i++) if(n%i==0) return false;
    return true;
}

ll binPow(ll a, ll b){
    ll res=1;
    while (b>0)
    {
        if(b&1) res*=a;
        a*=a;
        b>>=1LL;
    }
    return res;
}

ll modExp(ll a, ll b, ll mod){
    a=a%mod;
    ll res=1;
    while (b>0)
    {
        if(b&1) res=(a*res)%mod;
        a=(a*a)%mod;
        b>>=1LL;
    }
    return res;
}

ll combination(ll n, ll r){
    if(r>n || r < 0) return 0;
    if(r>n-r) r=n-r;
    ll res=1;
    for (ll i = 1; i <= r; i++)
    {
        res=res*(n-r+i)/i;
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
        ll n;
        cin >> n;
        
        vector <ll> v(n);

        for(ll &i:v) cin >> i;

        ll y=2e5+1;
        vector<pair<ll,ll>> p(y);
        for (ll i = 0; i < n; i++)
        {
            ll in=i+1;
            if (p[v[i]].first == 0) p[v[i]].first = in;
            p[v[i]].second=in;
        }

        ll sum=0;
        ll lastsum=0;
        ll lastl=0;
        ll lastr=0;

        ll MX=*max_element(all(v));

        for (ll i=0;i<=MX;i++)
        {
            // deb(p[i].first);
            // deb(p[i].second);
            if((p[i].second-p[i].first+1< i) || (p[i].second==0 && p[i].first==0)) continue;
            if(p[i].first<=lastl || p[i].second>=lastr){
                // deb(p[i].second-p[i].first+1);
                if(p[i].second-p[i].first+1 > lastsum){
                    sum-=lastsum;
                    sum+=p[i].second-p[i].first+1;
                    lastsum=p[i].second-p[i].first+1;
                    lastl=p[i].first;
                    lastr=p[i].second;  
                }
            } else{
                    sum+=p[i].second-p[i].first+1;
                    lastsum=p[i].second-p[i].first+1;
                    lastl=p[i].first;
                    lastr=p[i].second;
                    // lastsum=0;
            }
        }
        
        cout << sum << endl;
        
        
    }
    

    return 0;
}