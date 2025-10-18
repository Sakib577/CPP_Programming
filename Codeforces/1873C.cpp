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

vector<string> t={
    "1111111111",
    "1222222221",
    "1233333321",
    "1234444321",
    "1234554321",
    "1234554321",
    "1234444321",
    "1233333321",
    "1222222221",
    "1111111111"
};

ll solve(vector <string> &s){
    ll cur=0;
    for (ll i = 0; i < 10; i++)
    {
        for (ll j = 0; j < 10; j++)
        {
            if(s[i][j]=='X') cur+=t[i][j]-'0';
        }
    }
    return cur;
}

int main()
{

    fast_io;
    ll t;
    cin >> t;

    while (t--)
    {
        vector<string> s(10);
        for(string &i:s) cin >> i;

        ll res=solve(s);
        cout << res << endl;
    }
    return 0;
}