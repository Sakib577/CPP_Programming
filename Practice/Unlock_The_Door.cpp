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
const ll N = 1e5+10;
using namespace std;

vector <ll> fact(N);

ll modExp(ll a, ll b){
    a=a%M;
    ll res=1;
    while (b)
    {
        if(b&1)res=(res*a)%M;
        a=(a*a)%M;
        b>>=1LL;
    }
    return res;
}
int main()
{
    fast_io;
    ll t;
    cin >> t;

    fact[0]=1;
    for (ll i = 1; i < N; i++)
    {
        fact[i]=(fact[i-1]*i)%M;
    }
    

    // alphabet=k symbols
    // 1 symbol is using only one time in a combination
    // n=length of password
    // res= number of combinations possible for symbol in one combination * the number of possible combination choices
    // res= n! * kCn //(nCr formula)
    // nCr=n!/((n-r)! * r!)
    // nCr=(n!*(inverse of ((n-r)! * r!)))%M as we need to use M

    // (inverse of a)%M= (a^(M-2))%M
    while (t--)
    {
        ll n,k;
        cin >> n>> k;
        
        ll numerator=fact[k];
        ll denominator=(fact[k-n]*fact[n])%M;

        ll res=(fact[n]*((numerator*modExp(denominator,M-2))%M))%M;

        cout << res << endl;
    }
    

    return 0;
}