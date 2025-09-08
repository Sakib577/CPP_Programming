#include <bits/stdc++.h>
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr)
#define all(v) v.begin(), v.end()
#define revall(v) v.rbegin(), v.rend()
#define deb(x) cout << #x << " = " << x << '\n';
#define newl cout << endl
#define endl "\n"
typedef long long ll;
typedef unsigned long long ull;
const ll M = 1e9+7;

using namespace std;

int main()
{
    fast_io;
    ll t;
    cin >> t;

    while (t--)
    {
        ll k,x;
        cin >> k >> x;

        ll a,b;
        a=b=(ll)1<<k;
        ll half=a/2;
        ll total=a+b;
        ll temp=x;
        ll evens=0;
        while (!(temp&1))
        {
            evens++;
            temp>>=1;
        }
        
        vector <int> v;
        ll cnt=0;
        cnt=k-evens;

        ll p=x>>evens;
        ll q=p/2;
        for(ll i = 0; i < cnt; i++){
            ll chk = q & 1;
            if(chk) v.push_back(2); 
            else v.push_back(1);    
            q >>= 1;
        }
        cout << cnt << endl;
        for(auto i:v) cout << i << " ";

        newl;
    }
    

    return 0;
}