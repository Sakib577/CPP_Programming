#include <bits/stdc++.h>
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr)
#define all(v) v.begin(), v.end()
#define revall(v) v.rbegin(), v.rend()
#define deb(x) cout << #x << " = " << x << '\n';
#define newl cout << endl
typedef long long ll;
typedef __int128_t ll128;
typedef unsigned long long ull;

using namespace std;

int main()
{
    fast_io;
    ll t;
    cin >> t;
    while(t--){
        ll n,k;
        cin >> n >> k;

        string s;
        cin >> s;

        unordered_map <char,ll> freq;

        for (ll i = 0; i < n; i++)
        {
            freq[s[i]]++;
        }
        
        ll oddc=0;
        ll evenc=0;
        for(auto &[k,v]: freq){
            if(v&1) oddc++;
            else evenc++;
        }
        if( k >= oddc-1 &&  oddc !=0 && ((k-oddc+1)%2==0 || (k-oddc)%2==0) || oddc ==0){
            cout << "YES" << endl;
        }else cout << "NO" << endl;
    }
    
    return 0;
}