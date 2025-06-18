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
    vector <ll> v(4);
    for(ll &i: v) cin >> i;
    string s;
    cin >> s;
    ll sum=0;
    for(ll i=0;i <s.size(); i++)
    {
        sum+= v[s[i]-'0'-1];
    }
    cout << sum<< endl;
    return 0;
}