//implementation of stack using arrays.

#include<iostream>
using namespace std;
int push();
int pop();
void display();
int q[100],t=-1,n;
int main()
{
    int ch;
cout<<"Enter the size of stack : "<<endl;
cin>>n;
    while(1)
    {
        cout<<"Enter your choice : 1.Push 2.Pop 3.display 4.exit"<<endl;
        cin>>ch;
        switch (ch)
        {
         case 1 : push(); break;
         case 2 : pop();break;
         case 3 : display();break;
        case 4 : exit(0);
        
        default:
                cout<<"Enter correct choice "<<endl;
        }
    }
    return 0;
}

int push()
{  int e;
    if(t==n-1)
    {
        cout<<"stack is full"<<endl;
        return 0;
    }
    cout<<"Enter the elemnt ";
    cin>>e;
    q[++t]=e;
cout<<"Element is pushed "<<endl;
return 0;
}

int pop()
{
    if(t==-1)
    {
        cout<<"stack is full "<<endl;
        return 0;
    }
    t--;
cout<<"Element is poped "<<endl;
return 0;
}

void display()
{	cout<<"Stack is : "<<endl;
    for(int i=0;i<=t;i++)
    {
        cout<<q[i]<<" ";
    }
    cout<<endl;
}
