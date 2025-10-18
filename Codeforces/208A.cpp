#include <iostream>
using namespace std;

int main()
{
    string dub = "WUB";
    string input;

    cin >> input;
    

    for (int i = 0; i < input.size(); i++)
    {
        if (i >= 0 && input[i] == 'W' && input[i + 1] == 'U' && input[i + 2] == 'B')
        {
            input.erase(i, dub.length());
            if (i > 0 && input[i - 1] != ' ')
            {
                input.insert(i, " ");
            }
            i--;
        }
    }

    cout << input << endl;
    return 0;
}