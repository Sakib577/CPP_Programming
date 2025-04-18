#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long int m, n, a, x, y;
    cin >> n >> m >> a;

    x = ceil((double)m / a);
    y = ceil((double)n / a);

    cout << x * y << endl;

    return 0;
}