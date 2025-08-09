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
    for (ll i = 10; i >=0; i--) 
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
            if(mask&(1<<i)) v.push_back(nums[i]);
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
    string s,t;
    cin >> s >> t;

    ll cntm1=count(all(s),'-');
    ll cntm2=count(all(t),'-');
    ll cntp1=count(all(s),'+');
    ll cntp2=count(all(t),'+');
    ll cntw=count(all(t),'?');
    if(cntm1==cntm2 && cntp1==cntp2) cout << fixed << setprecision(12) << (double)1 << endl;
    else if(cntm1>=cntm2 && cntp1>=cntp2){
        double x;
        ll diff=(cntp1-cntm1)-(cntp2-cntm2);
        if((diff+cntw)%2!=0) cout << fixed << setprecision(12) << (double)0 << endl;
        else{
            ll pneed=(diff+cntw)/2;
            x=((double)combination(cntw,pneed))/binPow(2,cntw);
            cout << fixed << setprecision(12) << x << endl;
        }
        
    }
    else cout << fixed << setprecision(12) << (double)0 << endl;
    return 0;
}