#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n;
    vector<int> abc(3);
    cin >> n >> abc[0] >> abc[1] >> abc[2];
 
    if (abc[0] + abc[1] + abc[2] == n)
    {
        cout << 3 << endl;
    }
    else if (abc[0] + abc[1] == n || abc[2] + abc[1] == n || abc[2] + abc[0] == n)
    {
        cout << 2 << endl;
    } else if (abc[0] == n ||abc[1] == n ||abc[2] == n )
    {
        cout << 1 << endl;
    } else if (n%abc[0] == 0)
    {
        cout << n/abc[0] << endl;
    } else if (n%abc[1] == 0)
    {
        cout << n/abc[1] << endl;
    } else if (n%abc[2] == 0)
    {
        cout << n/abc[2] << endl;
    }
    
    return 0;
}