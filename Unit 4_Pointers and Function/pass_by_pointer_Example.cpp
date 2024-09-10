// pass by pointer

#include<iostream>
using namespace std;
void exchange(int *a , int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
int main()
{
	int x=5, y=3;
	exchange(&x , &y);
	cout<<"After function call"<<endl;
	cout<<"x= "<<x<<endl<<"y= "<<y<<endl;
	
	return 0;
}
