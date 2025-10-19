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
        vector<pair<ll,ll>> a(n);
        for (ll i = 0; i < n; i++)cin >> a[i].first;
        for (ll i = 0; i < n; i++)cin >> a[i].second;

        sort(all(a),[](auto &a,auto &b){
            return a.second < b.second;
        });
        
        map <ll,ll> pfreq;
    
        for (ll i = 0; i < n; i++)
        {
            set <ll> st;
            ll temp=a[i].first;

            while (temp>1)
            {
                st.insert(lp[temp]);
                temp/=lp[temp];
            }

            for(ll x: st)pfreq[x]++;
        }
        
        ll ans=LLONG_MAX;
        for(auto i: pfreq){
            if(i.second>1){ ans=0; break;}
        }
        
        if(ans==LLONG_MAX){
            // ll z=LLONG_MAX;
            for (ll i = 0; i < n; i++)
            {
                set <ll> st;
                ll temp=a[i].first+1;

                while (temp>1)
                {
                    st.insert(lp[temp]);
                    temp/=lp[temp];
                }
                for(ll x: st){
                    if(pfreq.count(x)){ans=min(ans,a[i].second);}
                }
                
            }

            // ans=min(ans,z);

            set <ll> st;
            
            ll temp=a[0].first;
            

            while (temp>1)
            {
                st.insert(lp[temp]);
                temp/=lp[temp];
            }
            for(auto x: st){
                pfreq[x]--;
                if(pfreq[x]==0)pfreq.erase(x);
            }
            for(auto x: pfreq){
                ans=min(ans, a[0].second*(x.first- a[0].first%x.first));
            }
            
        
            ans=min(ans,a[0].second+a[1].second);
            
            
        }
        cout << ans << endl;
    }
    

    return 0;
}