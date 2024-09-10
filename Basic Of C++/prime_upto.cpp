#include<iostream>
using namespace std;
int main()
{
	int i, n, count, a=1, k=0, j;
	cout<<"Enter n number";
	cin>>n;
	for(i=1;k<n;i++)
	{
		count=0;
		for(j=1;j<=a;j++)
		{
			if(a%j==0)
			{
				count++;
			}
		}
		if(count==2)
		{
			cout<<a<<endl;
			k++;
		}
		a++;
	}
	return 0;
}
