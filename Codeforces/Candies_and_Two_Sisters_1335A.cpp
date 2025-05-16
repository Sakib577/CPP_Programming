#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    int x;
    while ( t--)
    {
        cin >> x;
        int result= ((x%2 != 0)? (x/2):((x/2)-1));
        cout << result << endl;
    }
    
}