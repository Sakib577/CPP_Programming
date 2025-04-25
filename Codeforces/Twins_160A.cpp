#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> coins(n);
    for (int i = 0; i < n; i++)
    {
        cin >> coins[i];
    }

    sort(coins.rbegin(),coins.rend());

    float sum = accumulate(coins.begin(), coins.end(), 0); // 0 represents that it will start counting from 0 like sum= 0 + .....
    int myMoney = 0;
    int coinNumber = 0;
    for (int i : coins)
    {
        myMoney += i;
        coinNumber++;
        if (myMoney > (sum / 2))
        {
            break;
        }
    }

    cout << coinNumber << endl;
    return 0;
}