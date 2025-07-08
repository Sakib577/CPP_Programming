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

    ll cnt=1;
    ll MX=1;
    for (ll i = 0; i < s.size()-1; i++)
    {
        if(s[i]==s[i+1]){
            cnt++;
        }else{  
            cnt=1;
        }

        MX=max(MX,cnt);
    }
    
    cout << MX << endl;
    return 0;
}