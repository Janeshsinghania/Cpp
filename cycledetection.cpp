#include<bits/stdc++.h>
using namespace std;

bool iscycle(int src, vector<vector<int>> &adj, vector<bool> &visited, int parent)
{
    visited[src]=true;
    for(auto i: adj[src]){
        if(i!=parent){
            if(visited[i]){
                return true;
            }
            if(!visited[i] && iscycle(i,adj,visited,src)){
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int n,m;       //n=vertices and m=edges
    cin>>n>>m;
    vector <vector<int>> adj(n);
    for (int i = 0; i < m; i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bool cycle = false;
    vector <bool> visited(n,false);
    for (int i = 0; i < m; i++)
    {
        if(!visited[i] && iscycle(i,adj,visited,-1)){
            cycle = true;
        }
    }
    if(cycle){
        cout<<"cycle is present";
    }
    else{
        cout<<"cycle is not present";
    }
      
}