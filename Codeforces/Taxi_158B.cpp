#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int taxi = 0;
    int queue = 0;
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
            queue += input;
            if (queue > 4)
            {
                queue = input;
                taxi++;
            }
            else if (queue == 4)
            {
                taxi++;
                queue = 0;
                if (n == 1)
                {
                    taxi++;
                }
            }
        }
    }
    cout << taxi << endl;
    return 0;
}