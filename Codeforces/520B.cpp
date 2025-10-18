#include <iostream>
#include <set>
#include <algorithm>
#include <map>
#include <climits>
#include <vector>
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
    ll n, m;
    cin >> n >> m;

    ll cnt = 0;
    // if (n > m)
    //     cout << n - m << endl;
    // else if (n == m)
    //     cout << 0 << endl;
    // else
    // {
        ll db=0;
        cnt = 0;
        while(n!=m){
            if(m&1) m++;
            else {
                if(m<n) m++;
                else m/=2;
            }
            cnt++;
        }
        cout << cnt << endl;
    // }

    return 0;
}