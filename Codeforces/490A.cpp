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
    vector <ll> t(n);
    vector<ll> one, two, three;
    for (ll i = 0; i < n; i++)
    {
        ll tx;
        cin >> tx;
        if(tx==1) one.push_back(i+1);
        if(tx==2) two.push_back(i+1);
        if(tx==3) three.push_back(i+1);
    }
    ll MIN= min({one.size(),two.size(),three.size()});

    cout << MIN << endl;
    for (ll i = 0; i < MIN; i++)
    {
        cout << one[i] << " " << two[i] << " " << three[i] << endl;
    }
           
    return 0;
}