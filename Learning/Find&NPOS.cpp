#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    string guest, host, pile;
    cin >> guest >> host >> pile;
    string combined = guest + host;

    sort(combined.begin(), combined.end());
    sort(pile.begin(), pile.end());

    bool yes = true;
    if (pile.size() != combined.size())
    {
        yes= false;
    }
    else
    {
        for (int i = 0; i < pile.size(); i++)
        {
            if (pile[i] != combined[i])
            {
                yes = false;
            }
        }
    }

    if (yes)
    {
        cout << "YES"<< endl;
    } else cout << "NO" << endl;
    

    return 0;
}