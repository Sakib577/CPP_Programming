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
    ll n;
    cin >> n;
    
    map <string,ll> cnt;
    for(ll i=0; i< n; i++){
        string in;
        cin >> in;
        cnt[in]++;
    }
    
    string M="";
    ll MX=0;
    for(auto& [key, val]: cnt){
        if(val> MX){
            M=key;
            MX=val;
        }
    }
    
    cout << M << endl;
    return 0;
}