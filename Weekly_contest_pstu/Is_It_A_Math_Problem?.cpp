
#include <iostream>
#include <cmath>
#include <vector>
typedef long long ll;
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    ll div=0;
    for(ll i =1 ;i*i <= n; i++ ){ // ll should be used in loop too // have to be careful about it
        //counting devisiors
        if (n%i == 0)
        {
            div++;
            if (n/i!=i)
            {
                div++;
            }
        }
        
    }

    if (div & 1)    // another way of checking if odd
                    // bitwise & -- checks the least significant bit (LSB) 
                    // if (LSB(DIV) == 1 and 1) == 1 or, true --then odd
                    // if (LSB(DIV) == 0 and 1) == 0 or, false --then even
    {
        ll x= sqrtl(n); // sqrtl(1000000000000) == 999999.9999999999
                        // ll is converting it into an integer
        cout << x << " " << div << endl; // sqrtl() for more accurate calculation with long long
    } else cout << n << " " << div/2 << endl;

    return 0;
}
