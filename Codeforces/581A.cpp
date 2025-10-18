#include <iostream>
using namespace std;

int main(){
    int x , y;

    cin >> x >> y;

    cout << min(x, y) << " " <<( max(x,y)-min(x,y))/2 << endl;
    return 0;
}