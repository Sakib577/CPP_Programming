#include <iostream>
using namespace std;

int fib(int n){
    if (n==0 || n==1)return n;
    return fib(n-1)+fib(n-2);
}

int fac(int n){
    if (n==0)return 1;
    return n*fac(n-1);
}

int main(){

    int n;
    cin >> n;

    cout << n << "th fibonacci number is: " << fib(n) << endl;
    cout << n << " factorial is: " << fac(n) << endl;
    return 0;
}