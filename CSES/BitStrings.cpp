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

ll binpow(ll a, ll b){
    ll res=1;
    while (b)
    {
        if(b&1)res*=a;
        a*=a;
        b >>= 1; // it means b/=2;
    }
    return res;
}

ll modexp(ll a,ll b, ll m){
    a%=m;
    ll res=1;

    while (b)
    {
        if(b&1) res=(res*a)%m;
        a=(a*a)%m;
        b >>=1;
    }
    
    return res;
}

int main()
{
    fast_io;
    ll t;
    cin >> t;

    cout << modexp(2,t,1e9+7) << endl;
    return 0;
}