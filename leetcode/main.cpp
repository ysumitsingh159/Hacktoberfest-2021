#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cout<<"enter size of array";
    cin>>n;
    int a[n],i;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    int c0=0,c1=0,c2=0;
    for(i=0;i<n;i++){
        if(a[i]==0) c0++;
        else if(a[i]==1) c1++;
        else c2++;
    }
    int k;
    for(i=0;i<c0;i++) a[k++]=0;
    for(i=0;i<c1;i++) a[k++]=1;
    for(i=0;i<c2;i++) a[k++]=2;


    for(i=0;i<n;i++){
    cout<<a[i]<<"";
    }
}
return 0;
}
