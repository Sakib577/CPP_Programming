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
    string t;
    cin >> n >> t;

    string s="";
    if(t=="10"){
        if(n==1) cout << -1 << endl;
        else{
            for (ll i = 0; i <n-1; i++) s+='1';
            s+='0';
        }
    } else {
        for (ll i = 0; i <n; i++) s+=t;
    }

    
    
    cout << s << endl;
    return 0;
}
