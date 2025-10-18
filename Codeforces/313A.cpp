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
    ll n;
    cin >> n;

    if(n >=0) cout << n << endl;
    else{
        ll x,y;
        x=(n-n%10)/10;
        y=(n-n%100)/10 +n%10;

        cout << max(x,y) << endl;
    }
    
    return 0;
}