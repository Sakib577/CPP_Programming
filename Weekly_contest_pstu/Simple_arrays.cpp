#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    bool yes = true;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int count1 = count(a.begin(), a.end(), 1);
    int count2 = count(a.begin(), a.end(), 2);

    if (count1 == 0)
    {
        if (count2 % 2 != 0)
        {
            yes = false;
        }
    }
    else
        count1 -= count2 * 2;
    if (count1 % 2 != 0)
    {
        yes = false;
    }

    if (yes)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}