#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	cout<<setw(101)<<"This is setw"<<endl<<setw(101)<<"Hello world"<<endl;
	// typedef
	typedef int C;
	C a=5,b=6;
	cout<<"sum="<<a+b;
	
	return 0;
}
