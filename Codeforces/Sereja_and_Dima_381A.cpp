#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    int sereja=0, dima=0;
    vector<int> cards(n);
 
    for (int i = 0; i < n; i++)
    {
        cin >> cards[i];
    }
    int i =0;
    int j =n-1;
    int x = 0;
 
    while(i <= j){if (x%2 == 0)
        {
            if(cards[i]>cards[j]){
                sereja += cards[i];
                i++;
            }else { sereja += cards[j];
                j--;
            }
            
        }else{ if ( cards[i]<cards[j])
        {
            dima += cards[j];
            j--;
        } else { dima += cards[i];
            i++;
        }}
        x++;
    }
    
    cout << sereja << " " << dima << endl;
    return 0;
}