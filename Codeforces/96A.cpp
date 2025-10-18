#include <bits/stdc++.h>
using namespace std;

int main()
{
    string players;
    cin >> players;

    int count = 0;

    for (int i = 0; i < players.size() - 1; i++)
    {

        if (players[i] == players[i + 1])
            count++;
        else if (players[i] != players[i + 1] && count < 6)
            count = 0;
    }

    if (count >= 6)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}