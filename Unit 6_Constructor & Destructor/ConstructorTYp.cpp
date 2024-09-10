#include<iostream>
using namespace std;

class Item{
	
	int code, price;
	
	public:
		Item()
		{
			code=price=0; //Default Constructor
		}
		
		Item(int c, int p)
		{
			//parameterized constructor
			code=c;
			price=p;
		}
		
		Item(Item&x)
		{
			// Copy Constructor
			code=x.code;
			price=x.price;
		}
		
		void display()
		{
			cout<<"Code:: "<<code<<endl<<"Price:: "<<price<<endl;
		}
};

int main()
{
	Item I1;
	Item I2(102,300);
	Item I3(I2);
	I1.display();
	I2.display();
	I3.display();
	
	return 0;
}
