#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr)
#define all(v) v.begin(), v.end()
#define revall(v) v.rbegin(), v.rend()
#define deb(x) cout << #x << " = " << x << '\n';
#define newl cout << endl
typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
    
    fast_io;
    ll n,m;
    cin >> n>> m;
    vector <ll> tv(n);
    for(ll &i:tv) cin >> i;
    sort(all(tv));
    
    ll sum=0;
    for(ll i=0;i<m;i++) 
    if(tv[i]<0){
        sum+= abs(tv[i]);
    }
    
    cout << sum << endl;
    return 0;
}