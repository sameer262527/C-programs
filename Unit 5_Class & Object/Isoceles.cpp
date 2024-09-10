#include<iostream>
using namespace std;

class triangle{
	public:
		int a,b,c;
		
		void checking()
		{
			if(a=b=c)
			cout<<"Equilateral";
			else if(a!=b!=c)
			cout<<"Scalene";	
			else
			cout<<"Isosceles";
		}
};

int main()
{
	triangle t;
	cout<<"Enter 3 length: ";
	cin>>t.a>>t.b>>t.c;
	t.checking();
	
	return 0;
}
