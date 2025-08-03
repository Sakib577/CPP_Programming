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

int main()
{
    fast_io;
    ll t;
    cin >> t;

    while (t--)
    {
        ll n,x;
        cin >>n>>x;
        ll miu=0;
        vector<ll> v(n);
        for(ll &i:v)cin >> i;

        
        for (ll i = 0; i < n; i++)
        {
            if(i<x)miu=miu&v[i];
            else miu=miu|v[i];
        }
        cout << miu << endl;
    }
    return 0;
}