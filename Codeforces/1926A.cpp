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

        map <char, ll> freq;
        for (ll i = 0; i < s.size(); i++)
        {
            freq[s[i]]++;
        }
        ll mxv=0;
        char mxk;
        for(auto [k,v]: freq){
            if(v > mxv) {
                mxk=k;
                mxv=v;
            }
        }
        cout << mxk << endl;
    }
    
    return 0;
}