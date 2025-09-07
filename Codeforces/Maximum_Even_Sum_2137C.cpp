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
        ll a,b;
        cin >> a>>b;

        ll k=2;
        ll MXe=-1;

        // if((a+b)%2==0){
        //     if(b%2==0){
        //         MXe=a*(b/(b/2))+b/(b/2);
        //     } else {
        //         MXe=a*(b/2)+(b/2);
        //     }
        // } else {
        //     if(b%2==0){
        //         MXe=a*(b/(b/2))+b/(b/2);
        //     } else {
        //         MXe=a*(b/2)+(b/2);
        //     }
        //     if((a&1) && (b&1)){
        //         MXe=a*b+1;
        //     } else if()
        // }

        if(b&1){
            if((a*b+1)%2==0){
                MXe=a*b+1;
            }
        } else {
            if(a&1){
                if((b/2)%2==0){
                    ll x=b/2;
                    MXe=a*x+b/x;
                }
            }else{
                ll x=b/2;
                MXe=a*x+b/x;

            } 
        }
        
        cout << MXe << endl;
    }
    

    return 0;
}