#include<iostream>
using namespace std;

class Example{
	
	int *ptr;
	public:
		Example(int value)
		{
			ptr=new int;
			*ptr=value;
			cout<<"constructor: Data allocated and initialized to "<<*ptr<<" is being deleted"<<endl;
			delete ptr;
		}
		
		void display()
		{
			cout<<"Data = "<<*ptr<<endl;
		}
};

int main()
{
	Example e(5);
	e.display();
	
	return 0;
}
