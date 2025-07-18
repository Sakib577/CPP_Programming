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
    ll n,m,k;
    cin >> n>>m>>k;

    vector <ll> v(n),ap(m);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    
    for (ll i = 0; i < m; i++)
    {
        cin >> ap[i];
    }
    
    sort(all(v));
    sort(all(ap));

    ll i=0;
    ll j=0;
    ll cnt=0;
    while (i < n && j < m)
    {
        if(v[i] - k <= ap[j] && v[i] + k >= ap[j]){
            j++;
            i++;
            cnt++;
        } else{
            if(v[i] > ap[j]){
                j++;
            } else i++;
        }
    }
    
    cout << cnt << endl;
    
    return 0;
}