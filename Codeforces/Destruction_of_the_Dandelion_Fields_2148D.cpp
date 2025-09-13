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
        ll n;
        cin >> n;
        vector <ll> odd;
        vector <ll> even;

        for (ll i = 0; i < n; i++)
        {
            ll in ;
            cin >> in;
            if(in&1)odd.push_back(in);
            else even.push_back(in);
        }

        sort(revall(odd));

        // for (ll i = 1; i < odd.size(); i+=2)
        // {
        //     if(i+1<odd.size()) swap(odd[i],odd[i+1]);
        // }
        
        
        if(odd.size()==0) cout << 0 << endl;
        else {
            ll cnt=0;
            for(ll &i: even) cnt+=i;

            ll size=odd.size();
            size=(size+1)/2;
            for (ll i = 0; i < size; i++)
            {
                cnt+=odd[i];
            }
            
            cout <<  cnt << endl;
        }
        
    }
    

    return 0;
}