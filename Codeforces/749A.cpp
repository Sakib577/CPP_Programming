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
    ll n;
    cin >> n;
    
    if(!(n&1)){
        cout << n/2 << endl;
        for(ll i=0; i<n/2;i++){
            cout << "2 ";
        }
    } else {
        cout << n/2 << endl;
        for(ll i=0; i<n/2-1;i++){
            cout << "2 ";
        }
        cout << "3" << endl;
    }
    return 0;
}
 