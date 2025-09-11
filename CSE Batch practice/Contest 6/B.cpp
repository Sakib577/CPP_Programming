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

int main()
{
    fast_io;
    
    ll n;
    cin >> n;
    vector <ll> v(n);
    for(ll &i: v) cin  >> i;

    ll cont=0;

    for (ll i = 1; i < n-1; i++)
    {
        if(v[i]> v[i-1] && v[i] > v[i+1] || v[i]< v[i-1] && v[i] < v[i+1]){
            cont++;
        }
    }
    

    cout << cont << endl;
    
    return 0;
}