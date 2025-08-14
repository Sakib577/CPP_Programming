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
            if(mask&(1<<i)) v.push_back(nums[i]);
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
        ll n,m;
        cin >> n >> m ;

        vector <pair<ll,ll>> v(n*m);
        // vector <ll> ans(n);
        unordered_set <ll> st;

        ll x=0;
        for (ll i = 0; i < n*m; i++)
        {
            
            cin >> v[i].first;
            v[i].second=i/m;
        }
        
        sort(all(v));

        bool yes=true;
        vector <ll> pattern(n);

        for (ll i = 0; i < n; i++)
        {
            pattern[i]=v[i].second+1;
        }
        for (ll i = 0; i < m; i++)
        {
            for (ll j = 0; j < n; j++)
            {
                if(v[i*n+j].second+1!=pattern[j]){
                    yes=false;
                    break;
                }
            }
        }

        // vector <ll> temp;
        // for(ll i: st){
        //     temp.push_back(i);
        // }
        
        // reverse(all(temp));
        
        if(yes || n==1){
            for (ll i = 0; i < n; i++)
            {
                cout << pattern[i] << " ";
            }
            
            newl;
        } else {
            cout << -1 << endl;
        }
    }
    
   return 0;
}