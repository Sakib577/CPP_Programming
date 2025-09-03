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

int main()
{
    fast_io;
    string n,k;
    
    cin >> n>>k;

    ll sizen=n.size();
    ll sizek=k.size();
    ll MX=max(sizen,sizek);
    ll MN=min(sizen,sizek);
    

    ll diff=MX-MN;
    string t="";
    if(sizen<sizek){ 
        for (ll i = 0; i < diff; i++)
        {
            t+='0';
        }
        t+=n;
        n=t;
    } else if(sizek<sizen) {
        for (ll i = 0; i < diff; i++)
        {
            t+='0';
        }
        t+=k;
        k=t;
    }
    string ans="";
    reverse(all(n));
    reverse(all(k));
    ll carry=0;
    ll temp=0;
    for (ll i = 0; i < MX; i++)
    {
        temp=n[i]-'0'+k[i]-'0'+carry;
        if(temp>=10){
            ans+=(char)((temp%10)+'0');
            carry=temp/10;
        } else {
            ans+=(char)((temp)+'0');
            carry=0;
        }
    }
    if(carry)ans+=char(carry+'0');
    reverse(all(ans));
    cout << ans << endl;

    return 0;
}