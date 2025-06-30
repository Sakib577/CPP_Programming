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

    while (t--)
    {
        ll a,b,c;
        cin >> a>> b>> c;
        ll x;
        if(c&1)x=1;
        else x=0;

        if(a>b){
            cout << "First" << endl;
        } else if(a<b){
            cout << "Second" << endl;
        } else {
            cout << (((a+b+x)&1)?"First":"Second") << endl;
        }
    }
    return 0;
}