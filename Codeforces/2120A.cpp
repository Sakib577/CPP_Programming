#include <bits/stdc++.h>
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr)
#define all(v) v.begin(), v.end()
#define revall(v) v.rbegin(), v.rend()
#define deb(x) cout << #x << " = " << x << '\n'
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
        vector <ll> l(3),b(3);

        for (ll i = 0; i < 3; i++)
        {
            cin >> l[i] >> b[i];
        }
        
        bool yes= false;
        if(l[0]==l[1] && l[1] == l[2] && b[0]+b[1]+b[2] == l[0]) yes= true;
        else if(b[0]==b[1] && b[1] == b[2] && l[0]+l[1]+l[2] == b[0]) yes =true;
        
        
        else if(l[0]+l[1]==l[2] && b[0]+b[2]==l[2] && b[0]==b[1]) yes=true;
        else if(l[1]+l[2]==l[0] && b[1]+b[0]==l[0] && b[1]==b[2]) yes=true;
        else if(l[2]+l[0]==l[1] && b[2]+b[1]==l[1] && b[2]==b[0]) yes=true;
        
        else if(b[0]+b[1]==b[2] && l[0]+l[2]==b[2] && l[0]==l[1]) yes=true;
        else if(b[1]+b[2]==b[0] && l[1]+l[0]==b[0] && l[1]==l[2]) yes=true;
        else if(b[2]+b[0]==b[1] && l[2]+l[1]==b[1] && l[2]==l[0]) yes=true;

        else if(l[0]==l[1] && l[0]+l[1]+l[2]== b[2] && b[0]==b[2] && b[1]==b[2]) yes= true;
        else if(l[0]==l[2] && l[0]+l[2]+l[1]== b[1] && b[0]==b[1] && b[1]==b[2]) yes= true;
        else if(l[2]==l[1] && l[2]+l[1]+l[0]== b[0] && b[0]==b[2] && b[1]==b[0]) yes= true;
        else if(b[0]==b[1] && b[0]+b[1]+b[2]== l[2] && l[0]==l[2] && l[1]==l[2]) yes= true;
        else if(b[0]==b[2] && b[0]+b[2]+b[1]== l[1] && l[0]==l[1] && l[1]==l[2]) yes= true;
        else if(b[2]==b[1] && b[2]+b[1]+b[0]== l[0] && l[0]==l[2] && l[1]==l[0]) yes= true;
        cout << (yes?"YES":"NO") << endl;
    }
    return 0;
}