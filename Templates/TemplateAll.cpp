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
// sieve
// const ll N=1e7+10;
// vector<bool> sprime(N,true);
// vector<ll> lp(N,0),hp(N,0);
// const ll N2=1e5+10;
// vector<ll> divisors[N2];
// // or,
// // vector <vector<ll>> divisors(N2);

//     sprime[0]=sprime[1]=false;
//     for (ll i = 2; i <N; i++)
//     {
//         if(sprime[i]){
//             lp[i]=hp[i]=i;
//             for (ll j = 2*i; j < N; j+=i) {
//                 sprime[j]=false;
//                 hp[j]=i;
//                 if(lp[j]==0)lp[j]=i;
//             }
//         }
//     }

// prime factors
//     vector <ll> prime_factors;
//     while (n > 1)
//     {
//         ll prime_factor=hp[n];
//         while (n%prime_factor==0)
//         {
//             n/=prime_factor;
//             prime_factors.push_back(prime_factor);
//         }
//     }

// prime factorization with count or power
//     map <ll,ll> mprime_factors;
//     // also can be done with unordered map
//     while (n2 > 1)
//     {
//         ll prime_factor=hp[n2];
//         while (n2%prime_factor==0)
//         {
//             n2/=prime_factor;
//             mprime_factors[prime_factor]++;
//         }
//     }

//     for (auto i: mprime_factors)
//     {
//         cout << i.first << "^" << i.second << endl;
//     }

// divisors
//     for (ll i = 2; i < N2; i++)
//     {
//         for (ll j = i; j < N2; j+=i)
//         {
//             divisors[j].push_back(i);
//         }
//     }
int main()
{
    fast_io;
    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;
    }
    

    return 0;
}