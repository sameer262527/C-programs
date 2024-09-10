#include<iostream>
using namespace std;

class Test{
	
	int x, y;
	
	public:
		Test()
		{
			x=0;
			y=0;
			cout<<"Memory is allocated"<<endl;
		}
		
		~Test()
		{
			cout<<"x = "<<x<<"\t"<<"y = "<<y<<"\t"<<endl;
			cout<<"Memory is deallocated"<<endl;
		}
};

int main()
{
	{
		Test p;
	}
	
	return 0;
}
