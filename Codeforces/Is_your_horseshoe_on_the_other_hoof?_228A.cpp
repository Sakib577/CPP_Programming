#include <iostream>
#include <set>
using namespace std;
int main()
{
    set<int> arr;
    int w, x, y, z;
    cin >> w >> x >> y >> z;
    arr.insert(w);
    arr.insert(x);
    arr.insert(y);
    arr.insert(z);

    cout << 4 - arr.size() << endl;
    return 0;
}