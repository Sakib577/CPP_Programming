#include <iostream>
using namespace std;

int factorial(int number){
    if (number > 1)
    {
        return number * factorial(number-1);
    } else {
        return 1;
    }
    
}
int main(){
    int num;
    cout << "Enter the number you want to factorize: ";
    cin >> num;
    cout << "The factorial is: " << factorial(num) << endl;
    return 0;
}