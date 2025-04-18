#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double m, n, a, x, y;
    cin >> n >> m >> a;

    // int area= m * n;
    // int tilearea = a*a;

    x = ceil(n/a);
    y = ceil(m/a);

    long int tiles = (x*y) / a*a;

    if (m == n && n == a)
    {
        cout << 1 << endl;
    } else {
        cout << tiles << endl;
    }
    
    return 0;
}