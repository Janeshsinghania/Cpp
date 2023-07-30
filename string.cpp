#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
 
//changing lower string into upper string
int main()
{
    string std="janeshsinghania";
    for (int i = 0; i < std.size(); i++)
    {
        if (std[i]>='a' && std[i]<='z')
        {
            std[i]-=32;
        }
        
    }
    cout<<std<<endl;

//for changing upper into lower then add 32
//using another function name transform

transform(std.begin(), std.end(), std.begin(), ::tolower);
cout<<std;
}