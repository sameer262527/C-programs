// pass-by-value
#include<iostream>
using namespace std;

class Time{
	private:
		int hour;
		int min;
		
	public:
		void setdata(int h, int m)
		{
			hour=h;
			min=m;
		}
		
		void addtime(Time t1, Time t2)
		{
			hour=t1.hour+t2.hour;
			min=t1.min+t2.min;
			hour=hour+min/60;
			min=min%60;
		}
		
		void display()
		{
			cout<<"("<<hour<<","<<min<<")"<<endl;
		}
			
};
int main()
{
	Time t1, t2, t3;
	t1.setdata(5,55);
	t2.setdata(7,10);
	t3.addtime(t1,t2);
	cout<<"t1=";
	t1.display();
	cout<<"t2=";
	t2.display();
	cout<<"t3=";
	t3.display();
	
	return 0;
}
