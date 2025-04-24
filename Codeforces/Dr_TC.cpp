#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<int> count(n);
    int length;
    for (int i = 0; i < n; i++)
    {
        cin >> length;
        count[i] = 0;
        string bin;
        cin >> bin;
        string temp;

        for (int j = 0; j < length; j++)
        {
            temp = bin;
            if (temp[j] == '1')
            {
                temp[j] = '0';
            }
            else if (temp[j] == '0')
            {
                temp[j] = '1';
            }

            for(char c: temp){
                if (c == '1')
                {
                    count[i]++;
                }
            }
        }
    }

    for(int i: count){
        cout << i << endl;
    }

    return 0;
}