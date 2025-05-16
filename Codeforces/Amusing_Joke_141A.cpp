#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    // this is already right but I'm testing an easier solution

    // string guest, host, pile;
    // cin >> guest >> host >> pile;
    // string combined = guest + host;

    // for (int i = 0; i < pile.size(); i++)
    // {
    //     int index = combined.find(pile[i]);
    //     if (index != string::npos)
    //     {
    //         combined.erase(index, 1);
    //         pile.erase(i, 1);
    //         i--;
    //     }
    // }

    // if (pile.size() != 0 || combined.size() != 0)
    // {
    //     cout << "NO" << endl;
    // }
    // else
    //     cout << "YES" << endl;

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