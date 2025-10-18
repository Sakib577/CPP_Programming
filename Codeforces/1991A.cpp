#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;

    while (t--)
    {

        int n;
        cin >> n;
        vector<int> arr(n);
        int max = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (i % 2 == 0 && max < arr[i])
                max = arr[i];
        }
        cout << max << endl;
    }

    return 0;
}