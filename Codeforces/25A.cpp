#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    int even = 0, odd = 0, evenindex, oddindex;
    for (int i = 0; i < n; i++)
    {
        cin >> nums.at(i);
        if (nums[i] % 2 == 0)
        {
            even++;
            evenindex = i+1;
        }
        else
        {
            odd++;
            oddindex=i+1;
        }
    }

    if (even > odd)
    {
        cout << oddindex << endl;
    } else {
        cout << evenindex<< endl;
    }
    

    return 0;
}