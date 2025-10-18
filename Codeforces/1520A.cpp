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

        map <char, ll > freq;
        for (ll i = 0; i < n; i++)
        {
            freq[s[i]]++;
        }
        
        ll i=0;
        ll j=0;
        bool yes=true;
        while (i < n && j < n)
        {
            // deb(i);
            // deb(j);
            // deb(freq[s[i]]);
            // deb(s[i]);
            // deb(s[j]);
            
            if(s[i]!=s[j] && freq[s[i]]==0) i=j;
            else if(s[i]!=s[j] && freq[s[i]]!=0){
                yes=false;
                break;
            }
            else{
                j++;
                freq[s[i]]--;
            }
        }
        cout << (yes?"YES":"NO") << endl;
    }
    return 0;
}