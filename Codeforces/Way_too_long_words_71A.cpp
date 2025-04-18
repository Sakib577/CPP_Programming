#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<string> word(n);
    for (int i = 0; i < n; i++)
    {
        cin >> word.at(i);
    }

    for (int i = 0; i < n; i++)
    {
        if (word.at(i).size() < 11)
        {
            cout << word.at(i) << endl;
        }
        else
        {
            cout << word.at(i)[0] << word.at(i).size() - 2 << word.at(i)[word.at(i).size() - 1] << endl;
        }
    }

    return 0;
}