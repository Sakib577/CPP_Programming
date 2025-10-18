#include <iostream>
#include <algorithm>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    string s;
    
    while (n--)
    {
        cin >> s;
 
        int count0 = count(s.begin(), s.end(), '0');
        int count1 = count(s.begin(), s.end(), '1');
        int cost;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0' && count1 > 0)
            {
                count1--;
            } else if (s[i] == '1' && count0 > 0)
            {
                count0--;
            } else break;
        }
    
        cost = count0+count1;
        cout << cost << endl;
    }
 
    return 0;
}