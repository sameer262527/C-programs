#include<iostream>
using namespace std;

class point{
	
	public:
		int x, y;
	
	point(int a, int b)
	{
		x=a;
		y=b;
	}
	
	void display()
	{
		cout<<"x = "<<x<<","<<" y = "<<y<<endl;
	}
};

int main()
{
	point p(5,10);
	point p1=p;
	p.display();
	p1.display();
	
	return 0;
}
