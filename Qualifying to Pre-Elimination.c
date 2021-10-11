#include<stdio.h>
#include<stdlib.h>
int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int main()
{
    int p;
    scanf("%d", &p);
    while(p--)
    {
        int n, teams,i,p,ans=0;
        scanf("%d %d", &n ,&teams);
        int a[n+1];
        for(i=0;i<n;i++)
        scanf("%d", &a[i]);
        
        qsort(a, n, sizeof(int), cmpfunc);
        
        p=a[n-teams];
        for(i=0;i<n;i++)
        {
            if(a[i]>=p)
            ans++;
        }
        printf("%d \n", ans);
        
    }
    return 0;
}
