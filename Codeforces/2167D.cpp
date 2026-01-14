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

const ll N=100;
vector <bool> sprime(N,true);


int main()
{
    fast_io;

    sprime[0]=sprime[1]=false;
    for (ll i = 2; i <N; i++)
    {
        if(sprime[i]){
            for (ll j = 2*i; j < N; j+=i) {
                sprime[j]=false;
            }
        }
    }

    vector <ll> prime;

    for (ll i = 0; i < 100; i++)
    {
        if(sprime[i])prime.push_back(i);
    }
    

    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        vector <ll> v(n);
        // ll MN=LLONG_MAX;
        for(ll &i: v){ 
            cin >> i;
            // MN=min(MN,i);
        }

        ll g=v[0];
        for (ll i = 0; i < n; i++)
        {
            g=gcd(g,v[i]);
        }
        
        ll res=-1;
    
        for (auto i: prime)
        {
            if(g%i!=0){res=i;break;}
        }
        cout << res << endl;
    }
    
    return 0;
}