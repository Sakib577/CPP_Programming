#include <iostream>
typedef long long ll;
using namespace std;

int main()
{
    ll n;
    cin >> n;
    ll ans = 0;
    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            ans++;
            if (i != n / i)
            {
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}