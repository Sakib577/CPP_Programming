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
void printBin(ll n){
    cout << bitset<64>(n).to_string().substr(64-30) << endl;
}

int main()
{
    fast_io;
    ll t;
    cin >> t;

    while (t--)
    {
        ull n;
        cin >> n;
        
        // printBin(n);
        ll setcnt=0;
        vector <ll> v;
        bool start=false;
        for (ll i = 0; i <= 34; i++)
        {
            if((n>>i)&1){
                start=true;
                v.push_back(1);
                setcnt++;
            } else if(start)v.push_back(0);
        }
        
        string s="";
        bool st=false;
        for (ll i = v.size()-1; i >= 0 ; i--)
        {
            if(v[i]==1){
                st=true;
                s+="1";
            } else if(st) s+="0";
        }
        string t=s;
        reverse(all(s));

        if(s==t && !(setcnt&1)) cout << "YES" << endl;
        else cout << "NO" << endl;
        
        
        // if(setcnt&1)cout << "NO" << endl;
        // else cout << "YES" << endl;
    }
    

    return 0;
}