#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int sum;
        cin >> sum;
        vector<int> roundnums;

        int place = 1;
        for (sum; sum > 0; sum/=10)
        {
            int num;
            if (sum % 10 != 0)
            {
                num = sum % 10 * place;
                roundnums.push_back(num);
            }
            place *= 10;
        }
        cout << roundnums.size() << endl;
        for (int n : roundnums)
        {
            cout << n << " ";
        }
        cout << endl;
    }

    return 0;
}