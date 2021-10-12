#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
	int indexchange=600;
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	   int left[1501][1501];
	   int right[1501][1501];
	   int mat[1505][1505];
	   char c[305][305];
	   memset(left,0,sizeof(left));
	   memset(right,0,sizeof(right));
	   memset(mat,0,sizeof(mat));
	   
	    for(int i=1;i<=n;i++){
	        for(int j=1;j<=m;j++){
	            cin>>c[i][j];
	        }
	    }
	    for(int i=1;i<=n;i++){
	        for(int j=1;j<=m;j++)
	        mat[i+indexchange][j+indexchange]=c[i][j]-'0';
	    }
	    for(int i=1;i<=1500;i++){
	        for(int j=1;j<=1500;j++){
	            left[i][j]=mat[i][j]+left[i-1][j-1];
	            right[i][j]=mat[i][j]+right[i-1][j+1];
	        }
	    }
	    
	    vector<int>res(n+m-1,0);
	    for(int i=1+indexchange;i<=n+indexchange;i++){
	        for(int j=1+indexchange;j<=m+indexchange;j++){
	            if(mat[i][j]==1){
	                for(int k=1;k<=n+m-2;k++){
	                res[k]+=right[i][j-k]-right[i-k][j]+right[i+k][j]-right[i][j+k]+
	                        left[i][j+k]-left[i-k-1][j-1]+left[i+k-1][j-1]-left[i][j-k];
	                }
	            }
	        }
	    }
	    for(int i=1;i<n+m-1;i++)cout<<res[i]/2<<" ";
	    cout<<endl;
}
	return 0;
}
