#include <iostream>
using namespace std;

int main()
{
    int k, r;
    cin >> k >> r;
    int sumMoney;
    int i = 0;

    do
    {
        i++;
        sumMoney = k * i;
    } while (sumMoney % 10 != 0 && (sumMoney % 10) - r != 0);
    cout << i << endl;
    return 0;
}