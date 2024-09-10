#include<iostream>
using namespace std;

class shape{
	
	protected:
	float p,l,b;
	public:
		void setvalue(int x, int y)
		{
			l=x;
			b=y;
		}		
};

class square:public shape{
	public:
		void find_perimeter()
		{
			p=4*l;
			cout<<"Perimeter = "<<p<<endl;
		}
};

int main()
{
	shape bo, *bp;
	square s;
	bp=&s;
	bp->setvalue(3,3);
	s.find_perimeter();
	
	return 0;
}
