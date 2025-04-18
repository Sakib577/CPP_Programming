#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, k, sum, checksum, temp;
    sum = 0;
    checksum = 0;

    cin >> n >> k;

    vector<int> members;

    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        members.push_back(temp);
    }

    for (int i = 0; i < n; i++)
    {
        if (members.at(i) >= members.at(k-1) && members.at(i) != 0)
        {
            sum++;
        }
    }
    
    cout << sum << endl;
    
    return 0;
}