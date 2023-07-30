#include<iostream>
using namespace std;

void prime(int n)
{
    int primes[100]= {0};
    for (int i = 2; i <= n; i++)
    {
        if (primes[i]==0)
        {
            for (int j = i*i; j <=n; j+=i)
            {
                primes[j]= 1;
            }
            
        }
        
    }

    for (int i = 2; i <= n; i++)
    {
        if (primes[i]==0)
        {
            cout<<i<<" ";
        }
    }cout<<endl;
    
    
}
int main()
{
    int n;
    cin>>n;

    prime(n);


}