#include<iostream>
using namespace std;
int main()
{
	int i=1,n,a=1,k=0;
	cout<<"Enter n number";
	cin>>n;
	for(i=0;k<n;i++)
	{
		if(a%2==0)
		{
			cout<<a<<endl;
			k++;
		}
		a++;
	}
	return 0;
}
