#include <iostream>
#include <cmath>
using namespace std;

bool isprime(int x){
    if(x < 2) return false;
    for(int i =2; i*i <= x;i++){
        if(x%i == 0){
            return false;
        }
    } return true;
}

int main()
{
    int n;
    cin >> n;
    long long number;
    while (n--)
    {
        cin >> number;
        long long x = sqrt(number);
        
        if(x*x== number && isprime(x)){
            cout << "YES" << endl;
        } else {
            cout <<"NO"<<endl;
        }
    }

    return 0;
}