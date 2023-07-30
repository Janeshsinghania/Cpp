#include<bits/stdc++.h>
using namespace std;
const int N= 1e5 + 6;
vector<vector<int>> G[N];
vector<int> dist(N) , parent(N);
vector<bool> vis(N);
int cost = 0;
const int INF= 1e9;

int primeMST(int src)
{
    for (int i = 0; i < N; i++)
    {
        dist[i]=INF;
    }
    set<vector<int>> s;
    dist[src]=0;
    s.insert({0,src});
    //{wt,vertex}
    while (!s.empty())
    {
        auto x= *(s.begin());
        s.erase(x);
        vis[x[1]]=true;
        int u = x[1];
        int v = parent[x[1]];
        int w = x[0];
        cout<<u<<" "<<v<<" "<<w<<"\n";
        cost += w;
        for(auto it: G[x[1]]){
            if(vis[it[0]]){
                continue;
            }
            if(dist[it[0]]>it[1]){
                s.erase({dist[it[0]],it[0]});
                dist[it[0]] = it[1];
                s.insert({dist[it[0]],it[0]});
                parent[it[0]]= x[1];

            }

        }
    }
    return cost;
    

}

int main()
{
    int n,m;
    cin>>n>>m;
    for (int i = 0; i < m; i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        G[u].push_back({v,w});
        G[v].push_back({u,w});
    }
    primeMST(0);
    cout<<cost;
    

}