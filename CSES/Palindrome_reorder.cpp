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
    string s;
    cin >> s;

    map <char,ll> mp;

    for (ll i = 0; i <s.size(); i++)
    {
        mp[s[i]]++;
    }

    ll cnt=0;
    ll oddchar='\0';
    for(auto &[k,v]: mp) if(v&1){
        oddchar=k;
        cnt++;
        if(cnt>1) break;
    }
    
    if(cnt>1) cout << "NO SOLUTION" << endl;
    else {
        string out(s.size(),' ');
        ll j=s.size()-1;
        ll i=0;
        ll k=0;

        for(auto &[k,v]: mp){
            if(k==oddchar)continue;
            else {
                while (v>0)
                {
                    out[i]=out[j]=k;
                    i++;
                    j--;
                    v-=2;
                }
            }
        }

        
        if(cnt==1) while (mp[oddchar]>0)
        {
            out[i]=oddchar;
            i++;
            mp[oddchar]--;
        }
        
        // while (k<s.size())
        // {
        //     if(s[k]==oddchar) {
        //         k++;
        //         continue;
        //     }
        //     else out[i]=out[j]=s[k];
        //     i++;
        //     j--;
        //     k+=2;
        // }
        // for (ll i = 0; i < mp[oddchar]; i++)
        // {
        //     out[j]=oddchar;
        //     j++;
        // }
        
        cout << out << endl;
        
    }
    return 0;
}