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
    
    ll n;
    cin >> n;

    ll i=1;
    ll x=1;
    while (n>=x)
    {
        // deb(n); deb(i); deb(x);
        // newl;
        n-=x;
        i++;
        x+=i;
    }
    
    cout << i-1 << endl;
    return 0;
}