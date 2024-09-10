// Inline Function

#include<iostream>
using namespace std;
inline void sum(int a, int b) // function prototype
{
	int s;
	s=a+b;
	cout<<"Sum is "<<s<<endl;
}

int main()
{
	int x,y;
	cout<<"Enter the two value ";
	cin>>x>>y;
	sum(x,y);
	return 0;
	
}
