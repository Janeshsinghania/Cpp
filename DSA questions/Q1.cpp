//find the longest subsequence of a sorted array 
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> str = {"janesh", "jan","james"};
    sort(str.begin(),str.end());
    int a = str.size();
    string n = str[0];
    string m = str[1];
    string ans = "";
    for (int i = 0; i < n.size(); i++)
    {
        if(n[i]==m[i]){
            ans +=n[i];
        }
        else break;

    }
    cout<<ans;
    
    
}