#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string input;
    cin >> input;

    input.erase(remove(input.begin(), input.end(), '+'), input.end());
    reverse(input.begin(), input.end());
    int size= input.size();
    // remove(start, end, value) //It shifts the non '+' characters to the front. But the string still physically contains those leftover junk values at the end
    // erase(start, end) // erase is what actually clears everything

    long long int convertedNUM = stoll(input);
    vector <int> numInVector(size);

    for (int i = 0; i < size; i++)
    {
        numInVector.at(i) = convertedNUM % 10;
        convertedNUM /= 10;
    }

    sort(numInVector.begin(), numInVector.end());

    for (int i = 0; i < size; i++)
    {
        cout << numInVector.at(i);
        if (i != size-1)
        {
            cout << "+";
        }
    } cout << endl;
    return 0;
}