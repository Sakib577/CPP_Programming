#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    double k, sum=0;
    for (int  i = 0; i < n; i++)
    {
        cin >> k;
        sum += k;
    }

    cout << sum/n << endl;
    
    return 0;
}