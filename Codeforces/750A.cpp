#include <iostream>
using namespace std;

int main(){
    int n;
    int min;
    cin >> n >> min;

    int problemtime=0;
    int countsol=0;
    for (int i = 1; i <= n; i++)
    {   
        problemtime += i*5;
        if (240-problemtime >= min)
        {
            countsol++;
        } else {
            break;
        }
    }
    
    cout << countsol << endl;
    return 0;
}