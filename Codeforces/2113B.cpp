#include <bits/stdc++.h>
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr)
#define all(v) v.begin(), v.end()
#define revall(v) v.rbegin(), v.rend()
#define deb(x) cout << #x << " = " << x << '\n'
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
        ll w, h, a, b;
        ll x1, y1, x2, y2;

        cin >> w >> h >> a >> b >> x1 >> y1 >> x2 >> y2;
        bool yes = false;

        ll MXx=max(x1,x2);
        ll MNx=min(x1,x2);
        ll MXy=max(y1,y2);
        ll MNy=min(y1,y2);

        if(x1==x2){
            if((MXy-MNy-b)%b==0) yes=true;
            else yes= false;
        } else if(y1==y2){
            if((MXx-MNx-a)%a==0) yes=true;
            else yes= false;
        } else if((MXx-MNx-a)%a==0 || (MXy-MNy-b)%b==0) yes =true;
        else yes =false;

        cout << (yes ? "Yes" : "No") << endl;
    }
    return 0;
}