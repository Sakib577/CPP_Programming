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
    ll t;
    cin >> t;

    ll MAX=0;
    vector <ll> wf(t);
    for (ll i = 0; i < t; i++)
    {
        cin >> wf[i];
        if(wf[i] > MAX)
        MAX=wf[i];
    }

    ll sum=0;
    for (ll i = 0; i < t; i++)
    {
        sum+= MAX-wf[i];
    }
    
    cout << sum << endl;
    return 0;
}