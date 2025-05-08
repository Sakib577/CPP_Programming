#include <iostream>
using namespace std;

int main()
{
    string x, y, result;
    cin >> x >> y;
    for (int i = 0; i < x.size(); i++)
    {
        if (x[i] == y[i])
        {
            result.push_back('0');
        } else result.push_back('1');
    }

    cout << result << endl;
    return 0;
}