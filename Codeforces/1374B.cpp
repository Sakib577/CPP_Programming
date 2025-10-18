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

        ll cnt=0;
        while (n != 1)
        {
            if (n%6==0)
            {
                n/=6;
            } else if (n%3==0)
            {
                n*=2;
            } else {
                break;
            }
            cnt++;
        }

        cout << ((n==1)?cnt:-1) << endl;

    }
    return 0;
}