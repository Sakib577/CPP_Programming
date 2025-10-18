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
        ll a,b;
        cin >>a>>b;
        ll M= LLONG_MAX;
        ll x;
        for(ll i=a; i <= b; i++){
            x = (i-a)+(b-i);
            if (x<M)M=x;
        }
        
        cout << M << endl;
    }
    return 0;
}