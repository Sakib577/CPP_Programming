#include <iostream>
#include <set>
#include <algorithm>
#include <map>
#include <climits>
#include <vector>
#include <unordered_map>
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
    ll n;
    cin >> n;
    ll sum=0;
    for(ll i=1; i<= n;i++){
        sum +=i;
    }
    
    if(sum&1){
        cout << "NO" << endl;
    }else{
        ll x=sum/2;

        ll y,z;
        y=(n&1)?(n/2+1):(n/2);
        z=n/2;
        ll sumy=0;
        ll sumz=0;
        ll zi=n;
        ll yi=n;
        vector <ll> v2, v1(z);
        for (ll i = 0; i < z; i++)
        {
            if(i!=z-1){
                sumz+=zi;
                v1[i]=zi;
                zi--;
            } else{
                while (zi+sumz>x)
                {
                    zi--;
                }
                v1[i]=zi;
            }
        }
        
        for (ll i = 0; i < y; i++)
        {
            while(v1.end()!=find(all(v1),yi))
            {
                yi--;
            }
            v2.push_back(yi);
            yi--;
        }

        sort(all(v1));
        sort(all(v2));

        cout << y << endl;
        for(ll i:v2) cout << i << " ";
        newl;

        cout << z << endl;
        for(ll i: v1) cout << i << " ";
        newl;
    }
    return 0;
}