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
    
        ll n,k;
        cin >> n>> k;

        set <ll> st;
        for (ll i = 0; i < n; i++)
        {
            ll in;
            cin >> in;
            st.insert(in);
        }
        ll temp=0;
        vector <ll> v;
        for(ll i: st){
            v.push_back(i-temp);
            temp=i;
        }

        ll c=v.size();
        for (ll i = 0; i < k-c; i++)
        {
            v.push_back(0);
        }
        
        for (ll i = 0; i < k; i++)
        {
            cout << v[i] << endl;
        }
        

    
    

    return 0;
}