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
    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n);
        for(ll &i: v) cin >> i;

        map<ll ,ll> freq,cur;
        for(ll i: v) freq[i]++;

        ll cnt =0;
        for (ll i = n; i--;)    // i = n because when checking for condition i is decrementing
                                // when i=1 then condition is true but value of i becomes 0
                                // so the indexing is write.
        {
            cur[v[i]]++;
            if (freq.size()==cur.size())
            {
                for(auto [key,val]: cur){
                    if ((freq[key] -= val)==0)  // As I need to substract the value eventually
                    {
                        freq.erase(key);
                    }
                }
                cnt++;
                cur.clear();
            }
        }
        cout << cnt << endl;
    }
    return 0;
}