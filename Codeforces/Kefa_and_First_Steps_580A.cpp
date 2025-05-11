#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> days(n);
    int count =1;
    int max=1;
    
    for (int i = 0; i < n; i++)
    {
        cin >> days[i];
        if (i > 0)
        {
            if (days[i - 1] <= days[i])
            {
                count++;
                if (count > max)
                {
                    max = count;
                }
            }
            else
            {
                count = 1;
            }
        }
    }
    cout << max << endl;

    return 0;
}