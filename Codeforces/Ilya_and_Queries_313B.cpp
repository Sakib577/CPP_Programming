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
    string s;
    cin >> s;

    ll i=0;
    vector <ll> v(s.size()-1);
    while (i<s.size()-1)
    {
        if(s[i]==s[i+1]) {
            if(i!=0)v[i]=1+v[i-1];
            else v[i]=1;
        }
        else{
            if(i!=0)v[i]=v[i-1];
            else v[i]=0;
        }
        // deb(v[i]);
        i++;
    }

    ll t;
    cin >> t;

    while (t--)
    {
        ll l,r;
        cin >> l>> r;

        ll cnt;
        if(l-2>=0) cnt=v[r-2]-v[l-2];
        else cnt=v[r-2];
        
        
        cout << cnt << endl;
    }
    return 0;
}