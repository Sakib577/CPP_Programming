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
        ll n;
        cin >>n;
        
        vector<ll> v(n);
        for(ll &i:v)cin >> i;

        ll jump=0;
        for (ll i = 1; i < n-2; i++)
        {
            if(v[i]>v[i+1]){
                swap(v[i],v[i+1]);
                i+=2;
            }
        }

        for(ll &i:v) cout << i << " ";
        newl;
    }
    return 0;
}