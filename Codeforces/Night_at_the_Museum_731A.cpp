#include <bits/stdc++.h>
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr)
#define all(v) v.begin(), v.end()
#define revall(v) v.rbegin(), v.rend()
#define deb(x) cout << #x << " = " << x << '\n'
#define newl cout << endl
typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{

    fast_io;
    string s,t;
    s='a';
    cin >> t;
    s+=t;

    ll sum=0;
    for (ll i = 0; i < s.size()-1; i++)
    {
        if(abs(s[i]-s[i+1]) >13){
            sum+=26-abs(s[i]-s[i+1]);
        } else sum+= abs(s[i]-s[i+1]);
    }

    cout << sum << endl;
    
    return 0;
}