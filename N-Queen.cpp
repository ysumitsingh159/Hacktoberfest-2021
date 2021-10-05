// N queen problem
#include<iostream>
using namespace std;

bool place(int** arr,int p,int q,int n)
{
    for (int i = 0; i < p; i++)
    {
        if (arr[i][q]==1)
            return false;
    }
    int row=p;
    int col=q;
    while (row>=0 && col>=0)
    {
        if(arr[row][col]==1)
            return false;
        row--;
        col--;
    }
    while (row>=0 && col<n)
    {
        if(arr[row][col]==1)
            return false;
        row--;
        col++;
    }
    return true;
}

bool queen (int** arr,int p,int n)
{
    if (p>=n)
        return true;
    for (int i = 0; i < n; i++)
    {
        if (place(arr,p,i,n))
        {
            arr[p][i]=1;
            if (queen(arr,p+1,n))
                return true;
            arr[p][i]=0;
        }
    }
    return false;
}

int main()
{
    int n;
    cin>>n;
    int** arr=new int* [n];
    for (int i = 0; i < n; i++)
    {
        arr[i]=new int [n];
        for (int j = 0; j < n; j++)
            arr[i][j]=0;
    }

    if (queen(arr,0,n))
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
                cout<<arr[i][j]<<" ";
            cout<<endl;
        }
    }
    
    return 0;
}
