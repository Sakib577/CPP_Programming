#include <iostream>
#include <set>
using namespace std;

int main()
{
    int year, temp;
    cin >> year;

    do
    {
        set<int> yDigits;
        temp = ++year;
        for (int i = 0; i < 4; i++)
        {
            yDigits.insert(temp % 10);
            temp /= 10;
        }

        if (yDigits.size() == 4)
        {
            break;
        }

    } while (true);

    cout << year << endl;

    return 0;
}