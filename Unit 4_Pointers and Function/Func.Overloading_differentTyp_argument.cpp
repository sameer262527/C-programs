// Function overloading with different type of arguments

#include<iostream>
using namespace std;
int mul(int a, int b)
{
	return(a*b);
}
float mul(float a, float b)
{
	return(a*b);
}

int main()
{
	int x=4, y=2;
	float d=12, e=5;
	cout<<"Product of integer "<<mul(x,y);
	cout<<"\n";
	cout<<"Product of reals: "<<mul(d,e);
	cout<<"\n";
	
	return 0;
}
