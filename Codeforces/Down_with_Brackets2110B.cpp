#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string brackets;
        cin >> brackets;
        bool yes = false;
        int sum = 0;
        for (int i = 0; i < brackets.length(); i++)
        {
            if (brackets[i] == '(')
            {
                sum++;
            }
            else
            {
                sum--;
            }

            if (sum == 0 && i != (brackets.length()- 1))
            {
                yes=true;
                break;
            }
        }
        if (yes)
        {
            cout << "YES" << endl;
        } else cout << "NO" << endl;
        
        
    }
}