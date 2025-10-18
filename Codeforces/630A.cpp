#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> arr(4);
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];
    sort(arr.begin(), arr.end());
    int x = arr[3] - arr[2];
    int y = arr[3] - arr[1];
    int z = arr[3] - arr[0];

    cout << x << " " << y  << " " << z << endl;
    return 0;
}