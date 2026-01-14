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
        ll n,k;
        cin >> n>> k;

        string s;
        cin >> s;

        set <char> st;

        for (ll i = 0; i < n; i++)
        {
            st.insert(s[i]);
        }
        
        if(st.size()==1) cout << "NO" << endl;
        else {
            if(k!=0) cout << "YES" << endl;
            else{
                ll  i=0;
                ll j=n-1;

                bool yes=false;

                while (i<j)
                {
                    if(s[i] < s[j])
                    {
                        yes=true;
                        break;
                    } else if(s[i]>s[j])break;

                    i++;
                    j--;
                }
                
                cout << (yes?"YES":"NO") << endl;
            }
        }

    }
    

    return 0;
}