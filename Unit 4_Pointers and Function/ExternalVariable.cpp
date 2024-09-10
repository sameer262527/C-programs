// Program to demonstrate External variable
int test=200;
void multiply(int n)
{
	test=test*n;
}

#include<iostream>
using namespace std;
extern int test;
int main()

{
	cout<<test<<endl;
	multiply(4);
	cout<<test<<endl;
	
	return 0;
}
