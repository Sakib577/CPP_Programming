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
    ll a,b;
    cin >> a >> b;

    ll sum=0;
    ll temp=0;
    while (a > 0 || temp > b)
    {
        // deb(a/b);
        
        sum+=a;
        temp+= a%b;
        a=a/b;
        if(temp>=b){
            a+=temp/b;
            temp%=b;
        }
        
        // deb(sum);
        // deb(a);
        
        // deb(a%b);
        // deb(temp);
    }

    cout << sum << endl;
    
    return 0;
}