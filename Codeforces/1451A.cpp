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
    ll n,m;
    cin >> n >> m;

    ll act=min(m,n);

    if(act&1) cout << "Akshat" << endl;
    else cout << "Malvika" << endl;    
    return 0;
}