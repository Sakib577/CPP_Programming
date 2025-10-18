#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string word;
    cin >> word;

    int upperCount = 0;
    for (char c : word)
    {
        if (isupper(c))
            upperCount++;
    }
    if (upperCount > (double)word.size() / 2)
        transform(word.begin(), word.end(), word.begin(), ::toupper);
    else
        transform(word.begin(), word.end(), word.begin(), ::tolower);

    cout << word << endl;
    return 0;
}