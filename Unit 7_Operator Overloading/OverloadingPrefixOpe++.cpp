#include<iostream>
using namespace std;

class rectangle {
	
	int length, breadth;
	
	public:
		rectangle(int l , int b)
		{
			length=l;
			breadth=b;
		}
		
		void operator++()
		{
			++length;
			++breadth;
		}
		
		void display()
		{
			cout<<"Length= "<<length<<endl;
			cout<<"Breadth= "<<breadth<<endl;
		}
};

int main()
{
	rectangle r1(5,6);
	++r1; //r1.operator++();
	r1.display();
	
	return 0;
	
}
