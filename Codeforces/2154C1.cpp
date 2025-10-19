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

const ll N=2e5+3;
vector<ll> lp(N,0);

int main()
{
    fast_io;
    lp[0]=lp[1]=0;
    for (ll i = 2; i < N; i++)
    {
        if(lp[i]==0){
            lp[i]=i;
            for (ll j = 2*i; j < N; j+=i) {
                if(lp[j]==0)lp[j]=i;
            }
        }
    }

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)cin >> a[i];
        for (ll i = 0; i < n; i++){
            ll in;
            cin >> in;
        }
        
        map <ll,ll> pfreq;
    
        for (ll i = 0; i < n; i++)
        {
            set <ll> st;
            ll temp=a[i];

            while (temp>1)
            {
                st.insert(lp[temp]);
                temp/=lp[temp];
            }

            for(ll i: st)pfreq[i]++;
        }
        
        ll ans=-1;
        for(auto i: pfreq){
            if(i.second>1){ ans=0; break;}
        }
        
        if(ans==-1){
            for (ll i = 0; i < n; i++)
            {
                set <ll> st;
                ll temp=a[i]+1;

                while (temp>1)
                {
                    st.insert(lp[temp]);
                    temp/=lp[temp];
                }
                for(ll i: st){
                    if(pfreq[i]>0){ans=1;break;}
                }
                if(ans!=-1)break;
            }
        }

        if(ans==-1)cout << 2 << endl;
            else cout << ans << endl;
    }
    

    return 0;
}