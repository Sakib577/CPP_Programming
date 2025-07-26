#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void dfs(ll start, vector<vector<ll>> adj, ll n){
    vector<bool> visited(n,false);
    stack <ll> st;

    visited[start]=true;
    st.push(start);

    while (!st.empty())
    {
        ll node=st.top();
        st.pop();

        cout << node << " ";

        for (ll i =adj[node].size()-1;i>=0;i--)
        {
            ll neighbour=adj[node][i];
            if(!visited[neighbour]){
                visited[neighbour]=true;
                st.push(neighbour);
            }
        }
        
    }
    
}

int main(){
    ll n=5;
    vector<vector<ll>> adj(n);

    adj[0]={1,2};
    adj[1]={0,3};
    adj[2]={0,4};
    adj[3]={1};
    adj[4]={2};

    cout << "DFS traversal: ";
    dfs(2,adj,n);
    return 0;
}