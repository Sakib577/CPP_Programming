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

vector<vector<ll>> subsets(vector<ll>& nums) {
    ll n=nums.size(); 
    ll subsetCnt= (1<<n); // as number of subset is 2^n
    vector<vector<ll>> subset;
    for (ll i = 0; i < subsetCnt; i++)
    {
        vector<ll> v;
        for (ll mask = 0; mask < n; mask++)
        {
            if(i&(1<<mask)) v.push_back(nums[mask]);
        }
        subset.push_back(v);
    }
    return subset;
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
        ll fi=abs(v[0]);
        ll MX=0;
        for (ll i = 0; i < n; i++)
        {
            if(abs(v[i])>MX)MX=abs(v[i]);
        }
        
        
        cout << ((MX!=fi || n<=2)?"YES":"NO") << endl;
    }
    

   return 0;
}