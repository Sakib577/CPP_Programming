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

bool isPrime(ll x){
    for(ll i=2; i*i <=x;i++){
        if(x%i==0) return false;
    }
    return true;
}

int main()
{
    fast_io;
    ll n,m;
    cin >> n >> m;
    
    for(ll i = n+1; i < m ; i++){
        if(isPrime(i)) {
            cout << "NO"<<endl;
            exit(0);
        }
    }
    if(isPrime(m)) cout << "YES"<< endl;
    else cout << "NO" << endl;
    return 0;
}