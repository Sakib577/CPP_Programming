#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    long long funcN = 0;

    if (n % 2 == 0)
    {
        funcN += n / 2;
    }
    else
        funcN += -((n / 2)+1);

    cout << funcN << endl;

    return 0;
}