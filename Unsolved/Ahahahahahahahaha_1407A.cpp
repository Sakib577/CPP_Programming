#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        int count1 = 0;
        int count0 = 0;
        int half = n / 2;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == 1)
            {
                count1++;
            }
            else
                count0++;
            if (i % 2 == 0)
            {
                sum += arr[i];
            }
            else
            {
                sum -= arr[i];
            }
        }

        if (sum == 0)
        {
            cout << arr.size() << endl;
            for (int i : arr)
            {
                cout << i << " ";
            }
            cout << endl;
        }
        else if (count1 == 1)
        {
            cout << arr.size() - 1 << endl;
            for (int i = 0; i < arr.size() - 1; i++)
            {
                cout << 0 << " ";
            }
            cout << endl;
        }
        else
        {
            for (int i = 0; i < arr.size(); i++)
            {
                
            }
            
        }
        
        {
            for (int i = 0; i < n - 1; i++)
            {
                if (arr[i] == 1 && arr[i + 1] == 1)
                {
                    i++;
                }
                else if ((arr[i] == 1 && arr[i + 1] == 0) && half > 0)
                {
                    arr.erase(arr.begin(), arr.begin() + i);
                    half--;
                }
                else if (i == n - 2 && arr[i] == 0 && arr[i + 1] == 1 && half > 0)
                {
                    arr.erase(arr.begin(), arr.begin() + i + 1);
                }
            }
            cout << arr.size() << endl;
            for (int i : arr)
            {
                cout << i << " ";
            }
            cout << endl;
        }
    }

    return 0;
}