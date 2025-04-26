#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> magnets(n);
    int count=0;
    for (int i = 0; i < n; i++)
    {
         cin>> magnets[i];
         if (i == 0)
         {
            continue;
         } 
            if (magnets[i] != magnets[i-1])
            {
                count++;
            }
    }
    cout << count +1 << endl;

    return 0;
}