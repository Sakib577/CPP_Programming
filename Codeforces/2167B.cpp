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
        string s,t;
        cin >> s >> t;

        map<char,ll> mp1,mp2;

        set <char> st;
        
        for (ll i = 0; i < n; i++)
        {
            mp1[s[i]]++;
            mp2[t[i]]++;

            st.insert(s[i]);
        }
        
        bool yes=true;
        for(auto i: st){

            if(mp1[i]!=mp2[i]){yes=false;break;}
        }

        cout << (yes?"YES":"NO") << endl;
    }
    

    return 0;
}