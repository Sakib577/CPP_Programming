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
    while (b)
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
    while (b)
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

        ll sz=1;
        bool init=false;
        bool dec=false,inc=false;
        for (ll i = 0; i <n-1; i++)
        {
            if(!dec && !inc && !init){
                if(v[i]<v[i+1]){
                    inc=true;
                    sz++;
                    init=true;
                } else if(v[i]>v[i+1]){
                    dec=true;
                    sz++;
                    init=true;
                }
                
                
            }
            if(dec && v[i]<v[i+1]){
                sz++;
                inc=true;
                dec=false;
            }
            if(inc && v[i]>v[i+1]){
                sz++;
                dec=true;
                inc=false;
            }

            
        }
        
        cout << sz << endl;
    }
    

    return 0;
}