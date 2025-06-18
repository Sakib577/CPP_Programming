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
    ll t;
    cin >> t;
    
    while(t--){
        string x,y="abc";
        cin >> x;
        ll m=0;
        for(ll i=0; i<3; i++){
            if(x[i]==y[i]){
                m++;
            }
        }
        if(m>=1)cout << "YES" << endl;
        else{cout <<"NO"<<endl;}
    }
    return 0;
}