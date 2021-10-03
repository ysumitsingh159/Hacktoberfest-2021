#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<long long int>
#define pb push_back
#define f first
#define s second
#define mp make_pair
void solve(void);
int main(){
{  ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t;
cin>>t;
while(t--)
{solve();}

}
return 0;
}
void solve(){
ll l,i;
cin>>l;
string s;
cin>>s;
ll h=0,t=0;
for(i=0;i<l;i++)
    {
     if(s[i]=='H')
            h++;
     if(s[i]=='T')
     {
         if(h!=1)
         {
             cout<<"Invalid"<<endl;
             return;
         }
         else
            h--;

     }

}
if(h!=0)
    cout<<"Invalid"<<endl;
else
    cout<<"Valid"<<endl;
}


