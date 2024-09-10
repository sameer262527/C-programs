// function invoked by try block throwing exception 
#include<iostream>
using namespace std;

void divide(int a, int b)
{

	if(b==0)
	{
			throw b;
	}
	else{
		cout<<"Result = "<<float(a/b);
	}
	
}

int main()
{
	int a,b;
	cout<<"Enter the value of a and b: ";
	cin>>a>>b;
	try
	{
		divide(a,b);
	}
	catch(int i)
	{
		cout<<"Devided by zero exception: b = "<<i;
	}
	cout<<endl<<"END";
	
	return 0;
}
