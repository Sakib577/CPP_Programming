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
        ll n;
        cin >> n;

        vector <ll> v(n);
        for(ll &i: v)cin >> i;

        ll i=0;
        ll j=1;
        ll cnt=0;
        ll x=1;
        ll y=1;
        bool yes=true;
        while (i < n-1 && j < n)
        {
            if(v[i] > v[i+1]){
                j=i+1;
                cnt++;
                x=i+1;
                while (j < n-1 && v[j] >= v[j+1])
                {
                    j++;
                }
                y=j+1;
                if(j <n-1 && v[j+1] < v[i]) {
                    yes= false;
                    break;
                }
                if(i-1>-1 && v[i-1]>v[j]){
                    yes=false;
                    break;
                }
                i=j;
            }
            
            if(cnt>1) {
                yes= false;
                break;
            }
            // if(i-1 > -1 && i+1 < n){
            //     if((v[i] < v[i-1] && v[i] < v[i+1]) || (v[i] > v[i-1] && v[i] > v[i+1])){
            //         yes=false;
            //         break;
            //     }
            // }
            i++;
        }

        if(yes){
            cout << "yes\n" << x << " " << y << endl;
        } else {
            cout << "no" << endl;
        }

    return 0;
}
