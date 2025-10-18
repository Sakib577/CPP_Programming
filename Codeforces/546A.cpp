#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int k, n, w;
    cin >> k >> n >> w;

    int expence=0;
    for (int i = 1; i <= w; i++)
    {
        expence += i*k;
    }
    if (expence > n)
        cout << expence-n << endl;
    else
        cout << 0 << endl;
    
    return 0;
}