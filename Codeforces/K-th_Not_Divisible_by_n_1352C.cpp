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
    ll t;
    cin >> t;
    
    while(t--){
        ll n,k;
        cin >> n >> k;
        ll skip=k/(n-1);
        ll res=skip+k;
        if(res%n) cout << res << endl;
        else cout << res -1 << endl;
    }
    return 0;
}