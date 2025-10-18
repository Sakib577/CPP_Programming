#include <iostream>

using namespace std;

int main()
{
    string word, test;
    cin >> word;

    test = "hello";

    int j = 0;

    for (int i = 0; i < word.size(); i++)
    {
        if (word[i] == test[j])
        {
            j++;
        }
    }

    if (j == test.size())
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;

    return 0;
}