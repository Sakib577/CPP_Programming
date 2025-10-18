#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, h;
    cin >> n >> h;
    vector<int> friends(n);

    int row = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> friends[i];
        if (friends.at(i) > h)
        {
            row += 2;
        }
        else
            row++;
    }

    cout << row << endl;
    return 0;
}