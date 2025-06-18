#include <iostream>
#include <set>
#include <algorithm>
#include <map>
#include <climits>
#include <vector>
#include <unordered_map>
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
    ll n,m;
    cin >> n;
    vector <ll> vb(n);
    for(ll &i: vb) cin >> i;
    sort(all(vb));
    
    cin >> m;
    vector <ll> vg(m);
    for(ll &i: vg) cin >> i;
    sort(all(vg));
    ll i,j;
    i=j=0;
    ll cnt=0;
    while(i<n && j<m){
        if(abs(vb[i]-vg[j])<=1){
            cnt++;
            i++;
            j++;
        } else if(vb[i]<vg[j]) i++;
        else j++;
    }
    
    cout << cnt << endl;
    
    return 0;
}

// Well I did't get a TLE as the range was quite snall
// buy still I tried to optimize it