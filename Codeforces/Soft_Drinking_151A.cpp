#include <iostream>
using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int result= (min((k*l)/nl , min(c*d, p/np)))/n;

    cout << result << endl;
    return 0;
}