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
        string s;
        cin >> s;

        ll cnt=0;
        for (ll i = 0,j=n-1; i < n/2; i++,j--)
        {
            if(s[i]!=s[j]){
                cnt+=2;
            } else break;
        }
        cout << n-cnt << endl;
    }

    return 0;
}