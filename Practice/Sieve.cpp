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

const ll N=1e7+10;
vector<bool> sprime(N,true);
vector<ll> lp(N,0),hp(N,0);

int main()
{
    fast_io;

    sprime[0]=sprime[1]=false;
    for (ll i = 2; i <N; i++)
    {
        if(sprime[i]){
            lp[i]=hp[i]=i;
            for (ll j = 2*i; j < N; j+=i) {
                sprime[j]=false;
                hp[j]=i;
                if(lp[j]==0)lp[j]=i;
            }
        }
    }
    
    for (ll i = 0; i < 100; i++)
    {
        if(sprime[i]) cout << i << " ";
    }
    newl;

    for (ll i = 0; i < 20; i++)
    {
        cout << i << " "<< lp[i] << " " << hp[i] << endl;
    }
    
    

    return 0;
}