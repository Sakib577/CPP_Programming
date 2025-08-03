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

void printBin(ll n){
    for (ll i = 10; i >=0; i--) // for 11 bits i=10 to i=0
    {
        cout << ((n>>i)&1);
    }
    newl;
}

bool checkPow2(ll n){
    if(n&(n-1)) return false;
    else return true;
}

ll powof2(ll n){
    return 1<<n;
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
        b>>=1;
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
        b>>=1;
    }
    return res;
}

int main()
{
    fast_io;
    ll a=5;
    ll b=9;
    deb(a);
    deb(b);

    a=a^b;
    b=b^a;
    a=a^b;

    deb(a);
    deb(b);

    // 2 ^ 4 ^ 6 ^ 7 ^ 7 ^ 4 ^ 2 ^ 2 ^ 2;
    // this gives an warning if we accidentally mistook power with xor
    // we use 2 values only
    ll n;
    cin >> n;
    // vector <ll> v(n);
    // for(ll &i:v) cin >> i;
    // we don't even need this part

    ll x;
    ll y=0;
    ll res=0;
    for (ll i = 0; i < n; i++)
    {   cin >> x;
        res=y^x;
    }
    
    cout << x << endl;
    return 0;
}