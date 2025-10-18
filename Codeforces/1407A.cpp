#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cin.ignore();
        string arr;
        getline(cin, arr);
        int count1 = count(arr.begin(), arr.end(), '1');
        int count0 = count(arr.begin(), arr.end(), '0');
        int half = n / 2;

        
        if (count1 <= count0)
        {
            cout << count0 << endl;
            for (int i = 0; i < count0; i++)
            {
                cout << 0 << " ";
            }
            cout << endl;
        }
        else if (count1 % 2 != 0)
        {
            cout << count1 - 1 << endl;
            for (int i = 0; i < count1 - 1; i++)
            {
                cout << 1 << " ";
            }
            cout << endl;
        }
        else
        {
            cout << count1 << endl;
            for (int i = 0; i < count1; i++)
            {
                cout << 1 << " ";
            }
            cout << endl;
        }
    }

    return 0;
}