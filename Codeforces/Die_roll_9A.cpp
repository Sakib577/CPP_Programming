 


#include <iostream>
#include <vector>
#include <algorithm>
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr)
#define all(v) v.begin(), v.end()
#define revall(v) v.rbegin(), v.rend()
#define deb(x) cout << #x << " = " << x << '\n';
#define newl cout << endl
typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
    fast_io;
    ll t;
    cin >> t;

    while (t--)
    {
        string a,b;
        cin >> a>> b;
        char temp= a[0];
        a[0] = b[0];
        b[0] = temp;
        
        cout << a<< " "<< b<<endl;
    }
    return 0;
}