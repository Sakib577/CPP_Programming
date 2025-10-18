#include <bits/stdc++.h>
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr)
#define all(v) v.begin(), v.end()
#define revall(v) v.rbegin(), v.rend()
#define deb(x) cout << #x << " = " << x << '\n'
#define newl cout << endl
typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{

    fast_io;
    ll t;
    cin >> t;

    while (t--)
    {
        ll n,x;
        cin >> n>>x;

        ll cnt=1;
        
        if(n <=2) cout << cnt << endl;
        else {
            n-=2;
            cnt+=((n%x)!=0?n/x+1:n/x);
            cout << cnt << endl;
        }
    }
    return 0;
}