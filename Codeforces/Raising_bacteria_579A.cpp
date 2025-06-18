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
    ll j=0;

    for (ll i = 1; pow(2,i) <=t ; i++)
    {
        if(pow(2,i)== t){
            cout << 1 << endl;
            exit(0);
        } else {
            j=i;
        }
    }
    
    cout << 1+t-pow(2,j) << endl;
        
    return 0;
}