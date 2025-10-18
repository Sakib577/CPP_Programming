#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int n, a, b, c;
    cin >> n >> a >> b >> c;

    vector<int> arr(n + 1);
    if(a<=n)arr[a] = 1;
    if(b<=n)arr[b] = 1;
    if(c<=n)arr[c] = 1;

    for (int i = 0; i <= n; i++)
    {
        if (arr[i] != 0)
        {
            if (i + a <= n)
            {
                arr[i + a] = max(arr[i+a],arr[i]+1);
            }
            if (i + b <= n)
            {
                arr[i + b] = max(arr[i+b],arr[i]+1);
            }
            if (i + c <= n)
            {
                arr[i + c] = max(arr[i+c],arr[i]+1);
            }
        }
    }
    cout << arr[n] << endl;

    return 0;
}