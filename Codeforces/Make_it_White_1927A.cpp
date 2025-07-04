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
        string s;
        cin >> n >> s;
        auto it=find(all(s),'B');
        
        ll res,a,b;
        if(it==s.end()) res=0;
        else{
            a=it-s.begin();
            reverse(all(s));
            it=find(all(s),'B');
            b=s.size()-(it-s.begin())-1;
            res=b-a+1;
        }
        cout << res << endl;
    }
    return 0;
}