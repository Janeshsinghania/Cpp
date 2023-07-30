#include <iostream>
using namespace std;

bool isSafe(int** arr, int x, int y, int n){
    for (int row = 0; row < x; row++)
    {
        if (arr[row][y]==1)
        {
            return false;
        } 
    }
    int row=x;
    int coloum=y;
    while (row>=0 && coloum>=0)
    {
        if (arr[row][coloum]==1)
        {
            return false;
        }
        row--;
        coloum--;
        
    }
    row=x;
    coloum=y;
    while (row>=0 && coloum<n)
    {
        if (arr[row][coloum]==1)
        {
            return false;
        }
        row--;
        coloum++;
        
    }
    return true;
    
}

bool nQueen(int** arr, int x, int n)
{
    if (x>=n)
    {
        return true;
    }
    for (int coloum = 0; coloum < n; coloum++)
    {
        if (isSafe(arr,x,coloum,n))
        {
            arr[x][coloum]=1;
            if (nQueen(arr,x+1,n))
            {
                return true;
            }
            arr[x][coloum]=0;  //backtracking
        }
        
    }
    return false;
    

}
int main()
{
    int n;
    cin >> n;
    int **arr = new int *[n];

    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = 0;
        }
    }
    if (nQueen(arr, 0, n))
    {
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++)
            {
              cout<<arr[i][j]<<" ";
            }cout<<endl;
        }
    }
}