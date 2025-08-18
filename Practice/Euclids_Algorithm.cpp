#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll GCD(ll a, ll b){ 
    if(b==0) return a;
    return GCD(b,a%b);
}

ll LCM(ll a, ll b){
    return (a*b)/GCD(a,b);
}

int main(){

    cout << GCD(12,18) << endl;
    cout << LCM(12,18) << endl;
    cout << lcm(12,18) << endl;
    
    return 0;
}