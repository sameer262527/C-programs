// complete program using class
#include<iostream>
#include<conio.h>
using namespace std;

class rectangle{

	int length, breadth;
		
	public:
		void setdata(int l, int b)
		{
			length=l;
			breadth=b;
		}
		
		void showdata()
		{
			cout<<"Length= "<<length<<endl<<"Breadth= "<<breadth<<endl;
		}
		
		int findarea()
		{
			return length*breadth;
		}
		
		int findperimeter()
		{
			return 2*length*breadth;
		}		
};

int main()
{
	rectangle r;
	r.setdata(2,5);
	r.findarea();
	r.findperimeter();
	r.showdata();
	cout<<"Area= "<<r.findarea()<<endl;
	cout<<"perimeter= "<<r.findperimeter()<<endl;
	
	return 0;
}
