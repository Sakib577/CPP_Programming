#include <iostream>
#include <algorithm>
using namespace std;

typedef long long ll;

int main(){
    int t;
    cin>> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        string str;
        cin >> str;
        int ones= count(str.begin(),str.end(),'1');
        int zeros= count(str.begin(),str.end(),'0');
        
        int bad= n/2-k;

        if (ones < bad || zeros < bad)
        {
            cout << "NO" << endl;
            continue;
        }
        
        ones-=bad;
        zeros-=bad;

        if (zeros %2==0 && ones %2 ==0)
        {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
        
        
    }
    
    return 0;
}