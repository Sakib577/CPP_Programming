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
        ll n;
        cin >> n;
        bool yes= false;

        if(n<60 && 180<=n) yes=false;
        else {
            ll i=1;
            double ang=0;
            while (ang<=n)
            {
                ang=((double)(i*180)/(i+2));
                if(ang==n){
                    yes=true;
                    break;
                }
                
                i++;
            }
        }
        cout << (yes?"YES":"NO") << endl;
    }
    return 0;
}