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
    ll n;
    cin >> n;
    
    set <ll> st;
    for(ll i=0; i<n; i++){ 
        ll in;

        cin >> in;
        st.insert(in);
    }

    ll MX=*max_element(all(st));
    ll MN=*min_element(all(st));
    ll res;
    if(st.size()==2 || st.size()==3){
        bool yes=true;
        ll half=(MX+MN)/2;
        if(((MX+MN)&1) && st.size()==3)yes=false;
        if(yes)for(ll i: st){
            if(i!=MX && i!=MN){
                if(i!=half)yes=false;
            }
        }
        
        if(yes){
            if(st.size()==2 && (MX+MN)&1){
                cout << MX-MN << endl;
            } else cout << half-MN << endl;
        } 
        else cout << -1 << endl;
    } else if(st.size()==1) cout << 0 << endl;
    else cout << -1 << endl;
    
    return 0;
}