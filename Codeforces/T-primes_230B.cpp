#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int number;
    
    while (n--)
    {
        int divisible=0;
        cin >> number;
        for (int i = 1; i <= number; i++)
        {
            if (number%i == 0)
            {
                divisible++;
            }
            if (divisible > 3)
            {
                divisible=0;
                break;
            }
        }
        cout << ((divisible==3)?"YES":"NO") << endl;
        
    }
    
    return 0;
}