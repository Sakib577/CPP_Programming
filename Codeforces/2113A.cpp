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
        ll k,a,b,x,y;
        cin >> k >> a >> b >> x >> y;

        

        ll cnt=0;

        if(k < a && k >= b){
            cnt+= (k-b+y)/y;
        }else if(k < b && k >= a){
            cnt+= (k-a+x)/x;
        } else if(k < b && k < a){
            cnt=0;
        } else if(x<y){
            cnt+= (k-a+x)/x;
            k-= cnt*x;
            if(k>=b) cnt+= (k-b+y)/y;
        } else if(y<x){
            cnt+= (k-b+y)/y;
            k-= cnt*y;
            if(k>=a) cnt+= (k-a+x)/x;
        } else if(x==y){
            if(a<b) cnt+= (k-a+x)/x;
            else cnt+= (k-b+y)/y;
        } 

        cout << cnt << endl;
    }
    return 0;
}