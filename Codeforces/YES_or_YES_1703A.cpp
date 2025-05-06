#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    string word;
    while (n--)
    {
        cin >> word;
        transform(word.begin(),word.end(),word.begin(),::toupper);
        if (word == "YES")
        {
            cout << word << endl;
        } else cout << "NO" << endl;
    }

    
    return 0;
}