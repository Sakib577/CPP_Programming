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

ll combination2(ll n){
    if(n>2){
        return (n*(n-1))/2;
    }
    return 0;
}

int main()
{
    fast_io;
    ll n;
    cin >> n;

    for (ll i = 1; i <= n; i++)
    {
        cout << combination2(i*i)-2*2*(i-2)*(i-1) << endl;
    }
    
    return 0;
}