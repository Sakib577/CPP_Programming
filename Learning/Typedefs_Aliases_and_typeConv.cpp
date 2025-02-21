#include <iostream>
#include <vector>
using namespace std;

typedef string text;
// also can be done this using using keyword
// Alias = ছদ্মনাম
using number = int;

int main(){
    text name = "Sakib";
    number num= 15;
    cout << name << endl;
    cout << num << endl;

    int x=5;
    int y=7;
    int res= x/(double)y*100;
    cout << res;
    return 0;
}