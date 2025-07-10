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
    ll t;
    cin >> t;

    while(t--){
        ll n;
        cin >> n;
        vector <ll> v(n);
        for(ll &i: v) cin >> i;
        
        auto it1=find(all(v),1);
        auto it2=find(all(v),0);
        if(it1==v.end() || it2==v.end()){
            cout << "YES" << endl;
        } else{
            bool yes=false;
            for(ll i=0;i<n-1;i++){
                if(v[i]==0 && v[i+1]==0){
                    yes=true;
                    break;
                }
            }
            cout << (yes?"YES":"NO")<< endl;
        }
    }

    return 0;
}