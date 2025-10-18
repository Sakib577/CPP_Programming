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
        
        ll a,b,c;
        a=b=c=0;
        
        ll cnt=0;
        
        while(1){
            if(a>=n && b>=n && c>= n) break;
            a= min(b,c)*2+1;
            cnt++;
            if(a>=n && b>=n && c>= n) break;
            b= min(a,c)*2+1;
            cnt++;
            if(a>=n && b>=n && c>= n) break;
            c= min(b,a)*2+1;
            cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}