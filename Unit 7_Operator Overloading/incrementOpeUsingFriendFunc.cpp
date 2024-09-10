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
		
		friend void operator++(rectangle&);
		
		void display()
		{
			cout<<"usingFriendFunc"<<endl;
			cout<<"Length= "<<length<<endl;
			cout<<"Breadth= "<<breadth<<endl;
		}
};

void operator++(rectangle&r)
	{
		++r.length;
		++r.breadth;
	}

int main()
{
	rectangle r1(7,8);
	++r1; //r1.operator++();
	r1.display();
	
	return 0;
	
}
