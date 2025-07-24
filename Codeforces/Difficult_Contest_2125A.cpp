#include <bits/stdc++.h>
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr)
#define all(v) v.begin(), v.end()
#define revall(v) v.rbegin(), v.rend()
#define deb(x) cout << #x << " = " << x << '\n';
#define newl cout << endl
typedef long long ll;
typedef __int128_t ll128;
typedef unsigned long long ull;

using namespace std;

int main()
{
    fast_io;
    ll t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >>s;

        ll F=count(all(s),'F');
        ll N=count(all(s),'N');
        ll T=count(all(s),'T');

        for (ll i = s.size()-1; i >= 0; i--)
        {
            if(s[i]=='F' || s[i]=='N' || s[i]=='T') s.erase(i,1);
        }

        for (ll i = 0; i < T; i++)
        {
            s+='T';
        }
        for (ll i = 0; i < F; i++)
        {
            s+='F';
        }
        
        for (ll i = 0; i < N; i++)
        {
            s+='N';
        }
        
        
        cout << s << endl;
    }
    return 0;
}