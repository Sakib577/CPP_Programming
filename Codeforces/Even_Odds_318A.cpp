#include <iostream>
#include <vector>
typedef long long ll;
using namespace std;

int main()
{
    ll n, k;
    cin >> n >> k;

    ll numberOFodds= (n+1)/2;

    if (k > numberOFodds)
    {
        cout << 2*(k- numberOFodds) << endl;
    }
    else
    {
        cout << 2*k-1 << endl;
    }

    return 0;
}