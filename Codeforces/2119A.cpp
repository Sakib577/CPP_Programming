#include <bits/stdc++.h>
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
        ll a ,b,x,y;
        cin >> a >> b >> x >> y;

        ll q=b-a;
        ll even;
        ll cnt1=0;
        ll cnt2=0;
        if(a > b){
            // deb(a-b);
            if((a-b==1) && (a&1)){
                cout << y << endl;
            } else cout << -1 << endl;
        } else {
            if((b&1) == (a&1)){
                even=q/2;
            } else if(b&1){
                even= q/2 +1;
            } else {
                even=q/2;
            }

            cnt1=q*x;
            cnt2=even*y+(q-even)*x;
            cout << ((cnt2<cnt1)?cnt2:cnt1) << endl;
        }
        
    }
    return 0;
}