#include <bits/stdc++.h>
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
        ll a,x,y;
        cin >> a>> x>>y;

        ll MX=max(x,y);
        ll MN=min(x,y);
        if (a>=MN && a<=MX)
        {
            cout << "NO" << endl;
        } else cout << "YES" << endl;
        
        
    }
    return 0;
}

