#include <bits/stdc++.h>
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr)
#define all(v) v.begin(), v.end()
#define revall(v) v.rbegin(), v.rend()
#define deb(x) cout << #x << " = " << x << '\n';
#define newl cout << endl
#define el "\n"
typedef long long ll;
typedef __int128_t ll128;
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
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin >> n >> k;

        vector <ll> v(n*k);

        for(ll &i: v) cin >> i;

        ll median=(n+1)/2;
        ll diff=n-median;
        ll sum=0;
        sort(all(v));
        for (ll i = 0,j =n*k; i<k ; i++)
        {
            j-=diff;
            if(i!=0)j--;
            sum+=v[j-1];
        }
        cout << sum << el;
    }
    
   return 0;
}