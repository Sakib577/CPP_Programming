#include <iostream>
#include <deque>
using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;
    deque<long long> nums;
    for (long long i = 1, j = n; i <= n; i++, j--)
    {
        if (j % 2 != 0)
            nums.push_front(j);
        if (i % 2 == 0)
            nums.push_back(i);
    }

   
    cout << nums.at(k - 1) << endl;

    return 0;
}