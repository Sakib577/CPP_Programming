#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> f(n);
    int temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        f[temp-1] = i + 1;
    }
    for (int i : f)
        cout << i << " ";
        cout << endl;
}