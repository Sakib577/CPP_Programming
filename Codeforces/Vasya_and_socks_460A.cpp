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
    cin >> n>> m;
    ll sum=0;
    while(n > 0){
        if(n >= m){
            sum+= m;
            n-=m;
            n++;
        } else {
            sum+=n;
            n=0;
        }
    }
    cout << sum << endl;
    
    return 0;
}
 