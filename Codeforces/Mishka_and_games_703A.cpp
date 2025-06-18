#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
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

    ll mishka=0;
    ll chris=0;
    
    while(t--){
        ll x,y;
        cin >> x>> y;
        
        if (x>y) mishka++;
        else if(y>x) chris++;

    }

    if (mishka > chris)
    cout << "Mishka" << endl;
    else if (mishka < chris)
    cout << "Chris" << endl;
    else cout << "Friendship is magic!^^" << endl;
    
    
    return 0;
}   