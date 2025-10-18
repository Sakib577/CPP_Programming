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
        string s;
        cin >> s;
        ll size= s.size();
        if(size>=2 && s[size-2]== 'u' && s[size-1]== 's'){
            s[size-2]='i';
            s.erase(size-1,1);
        }

        cout << s << endl;
    }
    return 0;
}