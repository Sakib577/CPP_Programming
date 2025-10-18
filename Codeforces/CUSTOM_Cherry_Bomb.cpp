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
        int n, k;
        cin >> n >> k;
        vector<long long> A(n), B(n);
        for (int i = 0; i < n; i++)
            cin >> A[i];
        for (int i = 0; i < n; i++)
            cin >> B[i];

        int minusOne = 0;
        for (int i : B)
        {
            if (i == -1)
            {
                minusOne++;
            }
        }
        if (minusOne == B.size())
        {
            int aMax= *max_element(A.begin(),A.end());
            int aMin= *min_element(A.begin(),A.end());
            cout << (aMin+k) - aMax+1 << endl;
            continue;
        }
        else
        {
            bool isCom = true;
            int x = -1;
            for (int i = 0; i < n; i++)
            {
                if (B[i] != -1)
                {
                    x = A[i] + B[i];
                    break;
                }
            }

            if (x == -1)
            {
                cout << 0 << endl;
                continue;
            }

            for (int i = 0; i < n; i++)
            {
                if (B[i] != -1)
                {
                    if (x != A[i] + B[i])
                    {
                        isCom = false;
                        break;
                    }
                }

                else
                {
                    int gap = x - A[i];
                    if (gap < 0 || gap > k)
                    {
                        isCom = false;
                        break;
                    }
                }
            }
            if (isCom)
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 0 << endl;
            }
        }
    }

    return 0;
}