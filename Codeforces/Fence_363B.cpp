#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <climits>
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
    ll n,k;
    cin >> n >> k;
    vector <ll> h(n);
    
    for(ll i=0; i<n;i++) cin >> h[i];
    
    ll i=0;
    ll j=0;
    ll sum =0;
    ll MN=LLONG_MAX;
    ll in;
    
    while(i <= n-k && j < n){
        sum+=h[j];
        if(j-i+1==k){
            //deb(i);
            //deb(j);
            //deb(sum);
            if(MN>sum){
                MN=sum;
                in=i+1;
            }
            sum-=h[i];
            i++;
        }
        j++;
    }
    
    cout << in << endl;
    return 0;
}