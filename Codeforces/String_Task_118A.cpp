#include <iostream>
#include <algorithm>
using namespace std;

bool checkVowel(char c)
{
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y' ||
        c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'Y')
        return 1;
    else
        return 0;
}

int main()
{
    string word;
    cin >> word;

    for (int i = 0; i < word.size();)
    {
        if (checkVowel(word[i]))
        {
            word.erase(i, 1); // erases 1 character at index i
        }
        else
            i++;
    }
    transform(word.begin(), word.end(), word.begin(), ::tolower);

    for (char c : word)
        cout << '.' << c;

    cout << endl;

    return 0;
}