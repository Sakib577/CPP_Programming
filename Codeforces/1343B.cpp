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
        ll n;
        cin >> n;
        vector <ll> v(n);
        if ((n/2)%2!=0)
        {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
            ll sumE=0;
            ll sumO=0;
            for (ll i = 2; i <= n; i+=2)
            {
                cout << i << " ";
                sumE+=i;
            }
            ll i;
            for ( i = 1; i < n-2; i+=2)
            {
                cout << i << " ";
                sumO+=i;
            }
            cout << sumE -sumO << endl;
        }
        
    }
    return 0;
}   