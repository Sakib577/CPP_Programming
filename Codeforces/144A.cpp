#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> height(n);

    int max = 0, min = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> height[i];
        if (height[i] > height[max])
        {
            max = i;
        }
        else if (height[i] <= height[min])
        {
            min = i;
        }
    }

    int count= max + (n-1-min);

    if (min  < max)
    {
        count--;
    }
    
    cout << count << endl;

    return 0;
}