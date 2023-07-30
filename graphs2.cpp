#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N=10;
    int n,m;
    cin>>n>>m;
    vector<int> adj[N]; 
    
    for (int i = 0; i < m; i++)
    {
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
        
    }
    cout<<"adjacency list is given by:";
    for (int i = 1; i <=n+1; i++)
    {
        cout<<i<<"->";
        vector<int> :: iterator it;
        for(it= adj[i].begin();it!=adj[i].end();it++)
        {
            cout<<*it<<" ";
        }cout<<endl;
        
    }
}