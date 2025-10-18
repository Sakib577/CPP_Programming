#include <iostream>
#include <set>
#include <algorithm>
#include <map>
#include <climits>
#include <vector>
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
    cin >> n>> m;
    bool bw=true;
    for (ll i=0; i<n; i++){
        for(ll j=0; j<m; j++){
            char in;
            cin >> in;
            if(in=='C' || in=='M' ||in=='Y') bw=false;
        }
    }
    
    cout << (bw?"#Black&White":"#Color")<<endl;
    return 0;
}