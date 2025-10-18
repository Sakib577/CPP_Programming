#include <bits/stdc++.h>
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr)
#define all(v) v.begin(), v.end()
#define revall(v) v.rbegin(), v.rend()
#define deb(x) cout << #x << " = " << x << '\n';
#define newl cout << endl
#define endl "\n"
typedef long long ll;
typedef unsigned long long ull;
const ll M = 1e9+7;

using namespace std;

int main()
{
    fast_io;
    ll t;
    cin >> t;

    while (t--)
    {
        ll a,b;
        cin >> a >> b;

        if(a==b) cout << 0 << endl;
        else if(a==1 || b==1 || (a%b==0 || b%a==0)) cout << 1 << endl;
        else cout << 2 << endl;
    }
    

    return 0;
}