#include <iostream>
#include <set>
using namespace std;

int main()
{
    int n;
    int p, q;
    cin >> n;
    cin >> p;
    set<int> levels;
    for (int i = 0; i < p; i++)
    {
        int input;
        cin >> input;
        levels.insert(input);
    }
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int input;
        cin >> input;
        levels.insert(input);
    }

    if (levels.size()== n)
    {
        cout << "I become the guy." << endl;
    } else cout << "Oh, my keyboard!" << endl;
    
    return 0;
}