#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> cubes(n);

    for (int i = 0; i < n; i++)
    {
        cin >> cubes[i];
    }

    sort(cubes.begin(), cubes.end());

    for_each(cubes.begin(), cubes.end(), [](int cube)
             { cout << cube << " "; });
             cout << endl;

    return 0;
}