//using dynamic programming
#include<bits/stdc++.h>
using namespace std;

int coinchange(vector <int> &a, int n, int x){
    if(x == 0){
        return 1;
    }
    if(x<0){
        return 0;
    }
    if(n<=0){
        return 0;
    }
    return coinchange(a,n,x-a[n-1]) + coinchange(a,n-1,x);
}

int main(){
    int n;
    cin>>n;
    vector <int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int x;
    cin>>x;

    cout<<coinchange(a,n,x)<<endl;
    //for tabulation method create a 2D array D[][]
    

}