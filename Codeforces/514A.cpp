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
    string t;
    cin >> t;

    string s="";
    ll org= stoll(t);
    for(char ch: t){
        ll x= ch-'0';
        if (x>4){
            char c=(9-x)+'0';
            s+=c;
        } else s+=ch;
        
    }

    if (s[0]=='0')
        s[0]='9';
    
    cout << s << endl;
    return 0;
}   