#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        int i;
        for (i = a.size() - 1; i > 0; i--)
        {
            if (a[i] - (a[i - 1]) <= 1)
            {
                a.erase(a.begin() + (i));
            }
            else
            {
                cout << "NO" << endl;
                break;
            }
        }
        if (a.size() == 1)
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}