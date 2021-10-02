#include<iostream.h>
#include<conio.h>
void main()
{
 int x[5],i,j,k,d,tmp;
 clrscr();
 cout<<"Enter number for sort=";
  for(i=0;i<5;i++)
    {
     cin>>d>>x[i];
    }
 for(i=0;i<5;i++)
   {
     tmp=x[i];
       for(j=i-1;j>=0&&tmp<x;j--)
	{
	  x[j+1]=x[j];
	  x[j]=tmp;
	}
    }

      cout<<"sorted order is=";
	    for(j=0;j<5;j++)
	     {
	      cout<<d<<"\n"<<x[j];
	     }
 getch();
}
}
