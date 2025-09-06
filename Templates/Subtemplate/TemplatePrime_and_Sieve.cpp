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

bool isPrime(ll n){
    if(n<2) return false;
    else for (ll i = 2; i*i <= n; i++) if(n%i==0) return false;
    return true;
}

const ll N=1e7+10;
vector<bool> sprime(N,true);
vector<ll> lp(N,0),hp(N,0);
const ll N2=1e5+10;
vector<ll> divisors[N2];
// or,
// vector <vector<ll>> divisors(N2);

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

    ll n;
    cin >> n;
    ll n2=n;
    vector <ll> prime_factors;

    while (n > 1)
    {
        ll prime_factor=hp[n];
        while (n%prime_factor==0)
        {
            n/=prime_factor;
            prime_factors.push_back(prime_factor);
        }
    }
    
    for(ll i: prime_factors) cout << i << " ";

    newl;

    //or,
    map <ll,ll> mprime_factors;
    // also can be done with unordered map
    while (n2 > 1)
    {
        ll prime_factor=hp[n2];
        while (n2%prime_factor==0)
        {
            n2/=prime_factor;
            mprime_factors[prime_factor]++;
        }
    }

    for (auto i: mprime_factors)
    {
        cout << i.first << "^" << i.second << endl;
    }
    
    for (ll i = 2; i < N2; i++)
    {
        for (ll j = i; j < N2; j+=i)
        {
            divisors[j].push_back(i);
        }
    }
    
    for(ll i=0; i< 10; i++){
        for(auto j: divisors[i]) cout << j << " ";

        newl;
    }

    return 0;
}