#include <iostream>
#include <set>
#include <algorithm>
#include <map>
#include <climits>
#include <vector>
#include <unordered_map>
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
        vector <ll> v(n);
        for(ll &i:v) cin >> i;
        
        set <ll> st;
        for(ll &i: v) st.insert(i);
        
        cout << (st.size()==v.size()?"YES":"NO") << endl;
    }

    return 0;
}