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

vector<ll> fib(11);

void f(){
    
    fib[1]=1;
    fib[2]=2;
    for(ll i=3; i < 11 ; i++){
        fib[i]=fib[i-1]+fib[i-2];
    }
}
int main()
{
    f();
    
    fast_io;
    ll t;
    cin >> t;
    vector <ll> v(3);
    
    while(t--){
        ll n, m;
        cin >> n >> m;
        string s="";
        
        for(ll i=0; i<m;i++){
            cin >> v[0] >> v[1] >> v[2];
            sort(all(v));
            
            if(v[0]>= fib[n]&&v[1] >= fib[n] && v[2]>= fib[n]+fib[n-1]) s+='1';
            else s+='0';
        }
        cout << s << endl;
    }
    return 0;
}