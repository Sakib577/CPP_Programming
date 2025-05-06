#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    int x, y;
    cin >> n;

    while (n--)
    {
        cin >> x >> y;
        int diff;
        int count = 0;
        diff = abs(x - y);
        count =(diff +9 )/ 10;
        cout << count << endl;
    }

    return 0;
}