 // Finding max of two values by using template function

#include<iostream>
using namespace std;

template<class T>
T GetMax(T a,T b)
{
	T result;
	result=(a>b)?a:b;
	return(result);
}

int main()
{
	int a=5,b=6,k;
	float l=10,m=5,n;
	char x='a',y='b',z;
	k=GetMax(a,b);
	n=GetMax(l,m);
	z=GetMax(x,y);
	
	cout<<"larger of integers: "<<k<<endl;
	cout<<"larger of floats: "<<n<<endl;
	cout<<"larger of characters: "<<z<<endl;
	
	return 0;
}
