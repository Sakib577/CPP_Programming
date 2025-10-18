#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int taxi = 0;

    vector<int> sgrps(4); // for index 0, i'm leaving it unused
    while (n--)
    {
        int input;
        cin >> input;

        if (input == 4)
        {
            taxi++;
        }
        else
        {
            sgrps[input]++;
        }
    }

    int pair13 = min(sgrps[1], sgrps[3]);
    sgrps[1] -= pair13;
    sgrps[3] -= pair13;
    taxi += pair13;

    taxi += sgrps[2] / 2;
    sgrps[2] %= 2;
    if (sgrps[2] > 0)
    {
        taxi += sgrps[2];
        if (sgrps[1] >= 2)
        {
            sgrps[1] -= 2;
        }
        else
            sgrps[1] = 0;
    }

    if (sgrps[3] > 0)
    {
        taxi += sgrps[3];
    }
    if (sgrps[1] > 0)
    {
        taxi += ((sgrps[1]+3)/4);
    }

    cout << taxi << endl;
    return 0;
}