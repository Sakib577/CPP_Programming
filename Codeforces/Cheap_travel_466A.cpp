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
    ll n, m, a, b;
    cin >> n >> m >> a >> b;

    ll sum=0;
    if(ceil((float)n/(float)m)*b < (n/m)*b+(n-(n/m)*m)*a){
        sum = ceil((float)n/(float)m)*b;
    } else if(m*a > b){
        sum = (n/m)*b+(n-(n/m)*m)*a;
    } else sum = n*a;
    cout << sum << endl;
    return 0;
}