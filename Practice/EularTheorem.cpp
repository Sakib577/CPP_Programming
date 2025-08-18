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
const ll M = 1e9+7;

using namespace std;

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

    // we are printing 50 ^ 64 ^ 32
    // M=1e9+7 which is prime. so,
    cout << modExp(50,modExp(64,32,M-1),M) << endl;
    // (a^b)%m=(a^(b%(m-1)))%m
    

   return 0;
}