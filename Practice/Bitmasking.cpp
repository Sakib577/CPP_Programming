// There are N≤5000 workers. Each worker is available during some days of this month (which has 30 days). 
// For each worker, you are given a set of numbers, each from interval [1,30], representing his/her availability. 
// You need to assign an important project to two workers but they will be able to work on the project only when 
// they are both available. Find two workers that are best for the job — maximize the number of days when both these 
// workers are available.

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
    ll n;
    cin >> n;

    vector <ll> v(n); // limitation 63

    for (ll i = 0; i < n; i++)
    {
        ll numday;
        cin >> numday;
        for (ll j = 0; j < numday; j++)
        {
            ll x;
            cin >> x;
            v[i]=(v[i]|(1<<x));
        }
    }

    for (ll i = 0; i < n; i++)
    {
        cout << v[i] << endl;
        printBin(v[i]);
    }
    
    ll MX=LLONG_MIN;
    ll person1;
    ll person2;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = i+1; j < n; j++)
        {
            ll intersection=(v[i]&v[j]);
            ll commonDays=__builtin_popcount(intersection);
            cout << i << " " << j << " " << commonDays << endl;
            if(MX<commonDays){
                person1=i;
                person2=j;
                MX=commonDays;
            }
        }
    }
    
    cout << "Max Days: " << MX << " by  person: " << person1 << " and person: " << person2 << endl;
    return 0;
}