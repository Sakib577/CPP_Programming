#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int x=0, y=0, z=0;

    vector<int> vec(3);
    while (n--)
    {
        for (int i = 0; i < 3; i++)
        {
            cin >> vec[i];
        }
        x += vec[0];
        y += vec[1];
        z += vec[2];
    }
    
    if(x == 0 && z == 0 && y == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}