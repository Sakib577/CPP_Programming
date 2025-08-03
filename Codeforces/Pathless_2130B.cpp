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

int main()
{
    fast_io;
    ll t;
    cin >> t;

    while (t--)
    {
        ll n,s;
        cin >>n>>s;


        vector <ll> v(n);

        ll sum=0;
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
            sum+=v[i];
        }

        if(sum>s) {
            for (ll i = 0; i < n; i++) cout << v[i] << " ";
            newl;
        }
        else{
            if(sum+1!=s) cout << -1 << endl;
            else {
                ll z=count(all(v),0);
                ll o=count(all(v),1);
                ll t=count(all(v),2);
                for (ll i = 0; i < n; i++)
                {
                    if(z){
                        v[i]=0;
                        z--;
                    } else {
                        if(t){
                            v[i]=2;
                            t--;
                            if(o && i+1<n){
                                i++;
                                v[i]=1;
                                o--;
                            }
                        }else if(o!=0){
                            v[i]=1;
                        }
                    }
                }
                for (ll i = 0; i < n; i++)
                {
                    cout << v[i] << " ";
                }
                newl;
            }
            
        }
    }
    return 0;
}