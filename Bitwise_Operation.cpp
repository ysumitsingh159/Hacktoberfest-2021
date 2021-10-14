#include <iostream>
using namespace std;

main(){
	cout<<"**** Enter the Two Numbers **** "<<endl;
	int n,m;
	cout<<"Enter the first number: "<<endl;
	cin>>n;
	cout<<"Enter the second number: "<<endl;
	cin>>m;

//Performin the 6-bitwise operators

   cout<<"The AND bitwise operator between the two numbers = "<<(n&m)<<endl;
   cout<<"The OR bitwise operator between the two numbers = "<<(n|m)<<endl;
   cout<<"The XOR bitwise operator between the two numbers = "<<(n^m)<<endl;
   cout<<"The ~ NEGATION bitwise operation on the first number = "<<(~n)<<endl;
   cout<<"The ~ NEGATION bitwise operation on the second number = "<<(~m)<<endl;
   cout<<"The LEFT SHIFT bitwise operation on the first number = "<<(n<<1)<<endl;
   cout<<"The RIGHT SHIFT bitwise operation on the first number = "<<(n>>1)<<endl;
   cout<<"The LEFT SHIFT bitwise operation on the second number = "<<(m<<1)<<endl;
   cout<<"The RIGHT SHIFT bitwise operation on the second number = "<<(m>>1)<<endl;
   
   
   
   
}