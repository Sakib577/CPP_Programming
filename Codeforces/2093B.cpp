#include <iostream>
#include <vector>
using namespace std;

typedef long long ll;

int main(){
    ll t;
    cin >> t;
    string snum;
    while (t--)
    {
        cin >> snum;
        int n= snum.length();
        ll lzero=0;
        ll nonzero=0;
        for (ll i = 0; i < n; i++)
        {
            if (snum[i]!='0')
            {
                lzero=0;
                nonzero++;
            } else {
                lzero++;
            }
        }

        ll count = lzero+nonzero-1;

        cout << count << endl;
    }
    
    return 0;
}