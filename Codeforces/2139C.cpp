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
        ll k,x;
        cin >> k >> x;

        ll a,b,kk;
        kk=1ll<<k;
        a=x;
        b=(2*kk)-x;

        vector <ll> v;
        while (a!=b)
        {
            if(a>b){
                v.push_back(2);
                a-=b;
                b*=2;
            } else {
                v.push_back(1);
                b-=a;
                a*=2;
            }
        }
        

        reverse(all(v));
        cout << v.size() << endl;
        for(auto i:v) cout << i << " ";

        newl;
    }
    

    return 0;
}