#include<bits/stdc++.h>
using namespace std;
const int N=1e9;
int dp[100][100];

int solve(int i, int j, vector <int> &a){
    if(i==j){
        return a[i];
    }
    if(i>j){
        return 0;
    }
    if(dp[i][j]!= -1){
        return dp[i][j];
    }
    int l = a[i] + min(solve(i+2,j,a),solve(i+1,j-1,a));
    int r = a[j] + min(solve(i,j-2,a),solve(i+1,j-1,a));
    return dp[i][j] = max(l,r);
}

int main()
{
    memset(dp,-1,sizeof(dp));
    int n;
    cin>>n;
    vector <int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cout<<solve(0,n-1,a);
}