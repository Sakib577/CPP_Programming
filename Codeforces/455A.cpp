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
    ll MAX= 1E5+10;
    vector <ll> cnt(MAX);
    vector <ll> dp(MAX);
    for(ll i=0; i< n; i++){
        ll in;
        cin >> in;
        cnt[in]++;
    }
    dp[0]=0;
    dp[1]= cnt[1]*1;
    
    for(ll i=2; i < MAX; i++){
        dp[i]=max(dp[i-1],dp[i-2]+i*cnt[i]);
    }
    
    cout << dp[MAX-1] << endl;
    return 0;
}