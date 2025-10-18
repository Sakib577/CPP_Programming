#include <iostream>
using namespace std;

int main(){
    int x,y,z;
    cin >> x>> y>> z;
    int MAX= max(x,(max(y,z)));
    int MIN= min(x,(min(y,z)));
    
    cout << MAX-MIN << endl;
    return 0;
}