#include <iostream>
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    string childrens;
    cin >> childrens;

    char temp;
    while (t--)
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (childrens[i] < childrens[i + 1])
            {
                swap(childrens[i], childrens[i+1]);
                i++;
            }
        }
    }

    cout << childrens << endl;

    return 0;
}