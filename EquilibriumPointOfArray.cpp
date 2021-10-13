// Program to find equilibrium Point(point having property that sum of elements before it is equal to sum of elements after it).
// Time Complexity -- O(n) and Space Complexity -- O(1)
#include<bits/stdc++.h>
using namespace std;
int point(int arr[],int n,int sum)
{
      int presum=0;
	    int sufsum=sum;
      for(int i=0;i<n;i++)
	    {
           sufsum=sufsum-arr[i];
		       if(presum==sufsum)
           {
		                 return i;
           }
		       presum=presum+arr[i];
      }
      return -1;
}
int main()
{
      int n,sum=0;;
      cout<<"No. of Elements in Array : ";
      cin>>n;
      int arr[n];
      cout<<"Array Elements : ";
      for(int i=0;i<n;i++)
      {
          cin>>arr[i];
          sum=sum+arr[i];
      }
      int flag=point(arr,n,sum);
      if(flag==-1)
        cout<<"No Equilibrium Point.";
      else
        cout<<"Equilibrium Point at index : "<<flag;
      return 0;
}
