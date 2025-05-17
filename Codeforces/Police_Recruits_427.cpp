#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    int event;
    int police=0;
    int untreated=0;
    int temp=0;
    for (int i = 0; i < n; i++)
    {
        cin >> event;
        if (event >= 10)
        {
            event = 10;
        }
        
        if (event > 0)
        {
            police+=event;
        } else if (event < 0)
        {
            police += event;
            if (police < 0)
            {
                untreated -= police;
                police = 0;
            }
            
        }
    }
    
    cout << untreated << endl;
    return 0;
}