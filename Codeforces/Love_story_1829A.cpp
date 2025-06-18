#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
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
    
    while(t--){
        string s;
        cin >> s;
        string r="codeforces";
        ll cnt=0;
        for(ll i = 0; i<r.size(); i++){
            if(s[i]!=r[i]){
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}