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
    
    ll i=0;
    ll j= n/2;

    vector <ll> v(n);
    ll xj=1;
    ll xi=2;

    if(n < 4){
        if(n==1) cout << 1 << endl;
        else  cout << "NO SOLUTION" << endl;
        
    } else {while (j < n)
    {
        if(i < n/2) v[i]=xi;
        v[j]=xj;
        xi+=2;
        xj+=2;
        i++;
        j++;
    }

    for(ll i: v) cout << i << " ";
    newl;}
    return 0;
}