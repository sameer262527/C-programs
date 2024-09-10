// program to interchange two values using Pass by Value concept
#include<iostream>
using namespace std;
void exchange(int a, int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}

int main()
{
	int x=5, y=3;
	exchange(x,y);
	cout<<"After exchange"<<endl;
	cout<<"x= "<<x<<endl<<"y= "<<y<<endl;
	return 0;
}
