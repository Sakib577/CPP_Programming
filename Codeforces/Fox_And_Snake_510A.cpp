#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int ifodd=0;
    for (int i = 0; i < n; i++)
    {
        if (i%2 != 0)
        {
            ifodd++;
        }
        
        for (int j = 0; j < m; j++)
        {

            if (i % 2 == 0)
            {
                cout << "#";
            }
            else if (ifodd % 2 != 0)
            {
                if (j == m-1)
                {
                    cout << "#";
                }
                else
                {
                    cout << ".";
                }
            }
            else
            {
                if (j == 0)
                {
                    cout << "#";
                }
                else
                {
                    cout << ".";
                }
            }
        }
        cout << endl;
    }

    return 0;
}