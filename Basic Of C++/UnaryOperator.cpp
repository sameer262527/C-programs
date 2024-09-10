// uses of Unary Operator
#include<iostream>
using namespace std;
// for increment operator ++
int main()
{
	int a=5,b;
	b=++a; // prefix increment operator
	cout<<"a="<<a<<"\t b="<<b;
	cout<<"\n";
	
	b=a++; // postfix increment operator
	cout<<"a="<<a<<"\t b="<<b;
	return 0;
}

// for decrement operator --
/***  int main()
{
	int a=5,b;
	b=--a; // prefix increment operator
	cout<<"a="<<a<<"\t b="<<b;
	cout<<"\n";
	
	b=a--; // postfix increment operator
	cout<<"a="<<a<<"\t b="<<b;
	return 0;
}   ***/
