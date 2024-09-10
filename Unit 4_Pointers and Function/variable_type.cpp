#include<iostream>
using namespace std;
int g; // global variable, initially holds 0
void test()
{
	static int s; // static variable, initially holds 0
	register int r; // register variable
	r=5;
	s=s+r*2;
	cout<<"inside test"<<endl;
	cout<<"g= "<<g<<endl;
	cout<<"s= "<<s<<endl;
	cout<<"r= "<<r<<endl;
}
int main()
{
	int a; // or declare as: auto int a; automatic variable
	g=25;
	a=27;
	test();
	cout<<"inside main"<<endl;
	cout<<"a= "<<a<<endl;
	cout<<"g= "<<g<<endl;
	test();
	
	return 0;
	
}
