#include <iostream>
#include <set>
#include <algorithm>
#include <map>
#include <climits>
#include <vector>
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
        ll n;
        cin >> n;
        vector<ll> v(n);
        for(ll &i: v) cin >> i;
        
        auto IT= min_element(all(v));
        ll prod=1;
        for(ll i=0;i <n;i++){
            if(IT== (v.begin()+i))
            v[i]++;
            prod*=v[i];
        }
        cout << prod << endl;
    }

    return 0;
}