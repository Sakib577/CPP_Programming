#include <iostream>

using namespace std;

int main(){
    int n, exP, enP, curP = 0;
    cin >> n;
    int capacity = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> exP >> enP;
        curP -= exP;
        curP += enP;
        if (curP > capacity)
        {
            capacity = curP;
        }
    }

    cout << capacity << endl;
    
    return 0;
}