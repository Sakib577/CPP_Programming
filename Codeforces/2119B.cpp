#include <bits/stdc++.h>
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
        ll n;
        cin >> n;
        ll px,py,qx,qy;
        cin >> px >> py >> qx >> qy;
        vector <ll> v(n);
        ll sum=0;
        ll MX=LLONG_MIN;
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
            sum+=v[i];
            MX=max(MX,v[i]);
        }
        
        ll root1=pow(abs(px-qx),2);
        ll root2=pow(abs(py-qy),2);
        ll dist=root1+root2;
        double distr= sqrtl(dist);
        cout << ((dist > sum*sum || (sum-MX+distr < MX))?"No":"Yes") << endl;
    }
    return 0;
}