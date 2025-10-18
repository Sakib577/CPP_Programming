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
        ll nx=(n%4==0)?4:n%4;
        ll res= powl(8,nx);
        cout << ((n==0)?1:res%10) << endl;
    return 0;
}