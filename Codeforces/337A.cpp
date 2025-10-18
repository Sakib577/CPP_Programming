#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> puz;

    for (int i = 0; i < m; i++)
    {
        int input;
        cin >> input;
        puz.push_back(input);
    }

    sort(puz.begin(), puz.end());

    int diff,min = puz[n-1] - puz[0];
    for (int i = 1; i < m - n+1; i++)
    {
        diff = puz[i + n-1] - puz[i];
        if (min > diff)
        {
            min = diff;
        }
    }

    cout << min << endl;
    return 0;
}