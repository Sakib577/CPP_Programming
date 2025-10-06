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
        ll n;
        cin >> n;

        ll m=n-1;
        ll res=0;
        while (n>1)
        {
            if(n&1){
                res+=(n/2)+1;
            } else res+=n/2;

            n/=2;
        }

        while (m>1)
        {
            if(m&1){
                res+=(m/2)+1;
            } else res+=m/2;

            m/=2;
        }
        
        res++;

        cout << res << endl;
        
    }
    

    return 0;
}