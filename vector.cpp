#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);      //entering numbers into stack
    v.push_back(2);
    v.push_back(3);

    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<endl;
    }
    v.pop_back();  //deleting a number
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<endl;
    }
    for ( auto element:v)    //using auto function
    {
        cout<<element<<endl;
    }

    vector<int> v2 (3,50);  //50,50,50
    for ( auto element:v2)    
    {
        cout<<element<<endl;
    }   

    swap(v,v2);
    for ( auto element:v)  
    {
        cout<<element<<endl;
    }
    for ( auto element:v2)    
    {
        cout<<element<<endl;
    }   


    
    

}