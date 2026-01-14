#include <bits/stdc++.h>
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr)
#define all(v) v.begin(), v.end()
#define revall(v) v.rbegin(), v.rend()
#define deb(x) cout << #x << " = " << x << '\n';
#define newl cout << endl
#define endl "\n"
typedef long long ll;
typedef unsigned long long ull;
const ll M = 1e9+7;

using namespace std;

int main()
{
    fast_io;
    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        vector <vector<char>> v(n, vector<char> (n));
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < n; j++)
            {
                cin >> v[i][j];
            }
        }

        bool yes=true;
        for (ll i = 0; i < n; i++)
        {
            ll c=0;
            for (ll j = 0; j < n; j++)
            {
                if(v[i][j]=='#')c++;

                if(c>=2 && j-1>=0 && v[i][j]=='#' && v[i][j-1]=='.'){
                    yes=false;
                    break;
                }
                if(j<n-2 && (v[i][j]=='#' && v[i][j+1]=='#' && v[i][j+2]=='#')){
                    yes=false;
                    break;
                }
                if(i<n-2 && (v[i][j]=='#' && v[i+1][j]=='#' && v[i+2][j]=='#')){
                    yes=false;
                    break;
                }
            }
        }

        for (ll i = 0; i < n; i++)
        {
            ll c=0;
            for (ll j = 0; j < n; j++)
            {
                if(v[j][i]=='#')c++;

                if(c>=2 && j-1>=0 && v[j][i]=='#' && v[j-1][i]=='.'){
                    yes=false;
                    break;
                }
            }
        }

        cout << (yes?"YES":"NO") << endl;
    }
    

    return 0;
}