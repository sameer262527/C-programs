// finding minimum of two vlaues of different types by using template function
#include<iostream>
using namespace std;

template<class T,class U>
T GetMin( T a, U b)
{
	T result;
	result=(a<b)?a:b;
	return(result);
}

int main()
{
	int x=5,r;
	long y=9;
	r=GetMin(x,y);
	cout<<"Smaller of two numbers is::"<<r<<endl;
	
	return 0;
}

