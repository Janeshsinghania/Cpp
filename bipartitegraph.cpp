#include<bits/stdc++.h>
using namespace std;
vector <bool> vis;
vector <vector<int>> adj;

void color(int u, int curr, vector <int> &col, bool &bipart){
    if(col[u]!=-1 && col[u]!= curr ){
        bipart=false;
        return;
    }
    col[u]= curr;
    if(vis[u]){
        return;
    }
    vis[u]= true;
    for ( auto i: adj[u])
    {
        color(i, curr xor 1,col,bipart);
    }
    
}

int main()
{
     int n,m;       //n=vertices and m=edges
    cin>>n>>m;
    adj= vector <vector<int>>(n);
    vis= vector <bool> (n,false);
    for (int i = 0; i < m; i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector <int> col(n,-1);
    bool bipart= true;
    for (int i = 0; i < n; i++)
    {
        if(!vis[i]){
            color(i,0,col,bipart);
        }
    }
    if(bipart){
        cout<<"graph is bipartite";
    }
    else{
        cout<<"graph is not bipartite";

    }
    
}