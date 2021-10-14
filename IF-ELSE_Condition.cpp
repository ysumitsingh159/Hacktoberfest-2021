#include <iostream>
using namespace std;

int main(){
	int a,b; // a and b are the two numbers
	
	cout<<"Enter the first integer a: "<<endl;
	cin>>a;
	
	cout<<"Enter the second integer b: "<<endl;
	cin>>b;
	if(a>b)
		cout<<"First integer "<<a<<" is largest than second integer "<<b<<"."<<endl;
	
	else
		cout<<"Second integer "<<b<<" is largest than first integer "<<a<<"."<<endl;

	return 0;
	
	

	
}