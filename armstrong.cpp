#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the value:";
    cin>>n;

    int sum=0;
    int original=n;
    while (n>0)
    {
        int lastdigit=n%10;
        sum=sum + lastdigit*lastdigit*lastdigit;
        n=n/10;
    }
    
    if (sum==original)
    {
        cout<<"the no is armstrong no!!";
    }
    else{
        cout<<"not armstrong!!";
    }
    return 0;    
}


