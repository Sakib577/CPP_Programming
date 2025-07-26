#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void bfs(ll start, vector<vector<ll>> adj, ll n){
    vector<bool> visited(n,false);
    queue <ll> q;

    visited[start]=true;
    q.push(start);

    while (!q.empty())
    {
        ll node=q.front();
        q.pop();
        cout << node << " ";

        for (ll neighbour: adj[node])
        {
            if(!visited[neighbour]){
                visited[neighbour]=true;
                q.push(neighbour);
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

    cout << "BFS traversal: ";
    bfs(2,adj,n);
    return 0;
}