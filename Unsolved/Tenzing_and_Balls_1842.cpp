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
        vector<int> a(n);
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < a.size(); i++)
        {
            for (int j = a.size() - 1; j > i; j--)
            {
                if (a[i] == a[j])
                {
                    count += j - i + 1;
                    a.erase(a.begin() + i, a.begin() + j + 1);
                    i--;
                }
            }
        }
        cout << n - a.size() << endl;
    }
    return 0;
}
