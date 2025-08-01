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
    ll n;
    cin >> n;

    string s;
    cin >> s;

    unordered_map <string,ll> freq;

    for (ll i = 0; i < n-1; i++)
    {
        string t=s.substr(i,2);
        freq[t]++;
    }
    
    ll MX=0;
    string MXK;
    for(auto &[k,v]: freq){
        if(v>MX){
            MX=v;
            MXK=k;
        }
    }


    cout << MXK << endl;
    return 0;
}