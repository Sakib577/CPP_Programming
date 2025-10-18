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
        int n, x,count=0;
        cin >> n >> x;

        vector<int> members(n);
        for (int i = 0; i < n; i++)
        {

            cin >> members.at(i);
        }
        sort(members.rbegin(), members.rend());

        int z=0;
        for (int i = 0; i < n; i++)
        {
            z++;
            if ((members[i]*z) >= x)
            {
                count++;
                z=0;
            } 
        }
        cout << count << endl;
    }
    return 0;
}