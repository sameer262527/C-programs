#include<iostream>
using namespace std;
int main()
{
	int i=1,n;
	cout<<"Enter n number";
	cin>>n;
	for(i=1;i<=n;i++){
		if(i%2==0)
		{
			cout<<i<<"\t";
		}
	}
	return 0;
}
