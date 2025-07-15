#include <bits/stdc++.h>
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr)
#define all(v) v.begin(), v.end()
#define revall(v) v.rbegin(), v.rend()
#define deb(x) cout << #x << " = " << x << '\n';
#define newl cout << endl
typedef long long ll;
typedef __int128_t ll128;
typedef unsigned long long ull;

using namespace std;

int main()
{
    fast_io;
    ll t;
    cin >> t;

    vector <ll> v(t),sv(t);


    ll sum=0;
    for (ll i = 0; i < t; i++)
    {
        cin >> v[i];
        sv[i]=v[i];
        sum+=v[i];
        v[i]=sum;
    }
    
    sort(all(sv));

    sum=0;
    for (ll i = 0; i < t; i++)
    {
        sum+=sv[i];
        sv[i]=sum;
    }
    
    ll n;
    cin >> n;
    while (n--)
    {
        ll tp,l,r;
        cin >> tp >> l >>  r;

        l--;
        r--;
        if(tp==1){
            cout << ((l==0)?v[r]:v[r]-v[l-1]) << endl;
        } else {
            cout << ((l==0)?sv[r]:sv[r]-sv[l-1]) << endl;
        }
    }
    
    return 0;
}