 #include<iostream>
using namespace std;

class currency_converter{
	
	float NC;
	float IC;
	
	public:
		
		void setdata(float I)
		{
			IC=I;
		}
		void conversion();	
};
void currency_converter::conversion()
		{
			NC=IC*1.6;
			cout<<"Nepali currency is "<<NC;
		}

int main()
{
	float I;
	currency_converter c;
	cout<<"Enter indian currency ";
	cin>>I;
	c.setdata(I);
	c.conversion();
	
	return 0;
}
