#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int temp;
    bool isHard = false;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (temp == 1)
        {
            isHard = true;
            break;
        }
    }

    if (isHard)
    {
        cout << "HARD" << endl;
    }
    else
        cout << "EASY" << endl;

    return 0;
}