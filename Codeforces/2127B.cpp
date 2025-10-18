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
        string s;
        ll n,x;
        cin >> n >> x;
        cin >> s;

        bool flag1=true,flag2=true;
        ll cnt1=0;
        ll cnt2=0;
        for (ll i = x-1; i < n; i++)
        {
            if(s[i]=='#') {
                flag1=false;
            }

            if(flag1==0) cnt1++;
        }
        for (ll i = x-1; i >= 0; i--)
        {
            if(s[i]=='#') {
                flag2=false;
            }

            if(flag2==0) cnt2++;
        }
        
        if(x==1 || x==n || (flag1 && flag2)) cout << 1 << endl;
        else cout << min({max(cnt1+1,cnt2+1),x,n-x+1})<< endl;
        
        
        

    }
    

   return 0;
}