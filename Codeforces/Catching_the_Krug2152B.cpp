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
        ll n, x1,y1, x2,y2;
        cin >> n >> x1 >> y1>> x2 >> y2;

        ll dx=abs(x1-x2);
        ll dy=abs(y1-y2);

        ll posx,posy;
        if(x1>x2)posx=n-x1+dx;
        else if(x1<x2) posx=x1+dx;
        else posx=-1;

        if(y1>y2) posy=n-y1+dy;
        else if(y1<y2) posy=y1+dy;
        else posy=-1;

        cout << max(posx,posy) << endl;
    }
    

    return 0;
}