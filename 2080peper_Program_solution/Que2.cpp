#include<iostream>
using namespace std;

class height{
	int meter, centimeter;
	
	public:
		height() // default constructor
		{
			meter=0;
			centimeter=0;
		}
		
		height(int m, int cm)
		{
			meter=m;
			centimeter=cm;
		}
		
		friend height operator+(height, height);
		
		void display()
		{
			cout<<meter <<" meters "<< centimeter<<" centimeter"<<endl;
		}
};
height operator+ (height h1, height h2)
{
	height h;
	h.meter=h1.meter+h2.meter;
	h.centimeter=h1.centimeter+h2.centimeter;
	h.meter=h.meter+h.centimeter/100;
	h.centimeter=h.centimeter%100;
	
	return h;
}

int main()
{
	height h1(5,65);
	height h2(4,85);
	height h3=h1+h2;
	cout<<"Height 1: ";
	h1.display();
	cout<<"Height 2: ";
	h2.display();
	cout<<"Sum of height: ";
	h3.display();
	
	return 0;
	
}
