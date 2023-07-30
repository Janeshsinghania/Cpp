#include<bits/stdc++.h>
using namespace std;
const int N=10;
bool vis[N];
 
void dfs(int node, vector <int> adj[]){
    vis[node]=1;
    cout<<node<<" ";
    vector <int> :: iterator it;
    for  (it = adj[node].begin();it!=adj[node].end(); it++)
    {
        if(vis[*it]);
        else{
            dfs(*it,adj);
        }
    }
    
}

int main()
{
    vector <int> adj[N];
    for (int i = 0; i < N; i++)
    {
        vis[i] = 0;
    }
    int n,m;
    cin>>n>>m;

    int x,y;
    for (int i = 0; i < m; i++)
    {
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    dfs(1,adj);
}    