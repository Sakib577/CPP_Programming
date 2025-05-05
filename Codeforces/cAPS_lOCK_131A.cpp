#include <iostream>
#include <string>
using namespace std;

int main()
{
    string word;
    cin >> word;
    bool allupper = true;
    bool alllower = true;
    bool FlowerAllupper = false;
    bool lowerinmiddle = false;
    if (word.size() == 1)
    {
        if (word[0] > 'Z')
        {
            word[0] = toupper(word[0]);
        }
        else
        {
            word[0] = tolower(word[0]);
        }
        cout << word << endl;
        exit(0);
    }
    else if (word[0] > 'Z')
    {
        for (int i = 1; i < word.size(); i++)
        {
            if (word[i] <= 'Z')
            {
                alllower = false;
                FlowerAllupper = true;
            }
            if (word[i] > 'Z')
            {
                FlowerAllupper = false;
                break;
            }
        }

        if (alllower)
        {
            cout << word << endl;
        }
        else if (FlowerAllupper)
        {
            word[0] = toupper(word[0]);
            for (int i = 1; i < word.size(); i++)
            {
                word[i] = tolower(word[i]);
            }
            cout << word << endl;
        }
        else
            cout << word << endl;
    }
    else
    {
        for (int i = 0; i < word.size(); i++)
        {
            if (word[i] > 'Z')
            {
                allupper = false;
            }
        }
        if (allupper)
        {
            for (int i = 0; i < word.size(); i++)
            {
                word[i] = tolower(word[i]);
            }
            cout << word << endl;
        }
        else
            cout << word << endl;
    }

    return 0;
}