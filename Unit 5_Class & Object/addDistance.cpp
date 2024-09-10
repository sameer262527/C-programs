#include<iostream>
using namespace std;

class Distance{
	private:
		int feet;
		int inch;
		
	public:
		void setdata(int f, int h)
		{
			feet=f;
			inch=h;
		}
		
		void adddistance(Distance d1, Distance d2)
		{
			feet=d1.feet+d2.feet;
			inch=d1.inch+d2.inch;
			feet=feet+inch/12;
			inch=inch%12;
		}
		
		void display()
		{
			cout<<"("<<feet<<","<<inch<<")"<<endl;
		}
			
};
int main()
{
	Distance d1, d2, d3;
	d1.setdata(5,6);
	d2.setdata(7,8);
	d3.adddistance(d1,d2);
	cout<<"d1=";
	d1.display();
	cout<<"d2=";
	d2.display();
	cout<<"d3=";
	d3.display();
	
	return 0;
}
