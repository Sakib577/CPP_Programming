
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    if (y==0)
    {
        cout << "YES" << endl;
        exit(0);
    }
    
    bool z = true;
    vector<int> dstairs(y);
    for (int i = 0; i < y; i++)
    {
        cin >> dstairs[i];
    }
    sort(dstairs.begin(),dstairs.end());
    for (int i = 0; i < y-2; i++)
    {
        if (dstairs[i+1]-dstairs[i]== 1 && dstairs[i+2]-dstairs[i+1]== 1)
        {
            z=false;
        }
    }
    cout << ((z && dstairs[y-1] != x && dstairs[0] != 1)?"YES":"NO") << endl;
    return 0;
}