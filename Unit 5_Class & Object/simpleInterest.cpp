#include<iostream>
using namespace std;

class simple_interest_calculator{
	 
	float principal, rate, time, interest, total_amount;
	
	public:
		void getdata()
		{
			cout<<"Enter principal, rate and time: ";
			cin>>principal>>rate>>time;
		}
		
		void showdata()
		{
			interest=(principal*rate*time)/100;
			total_amount=interest+principal;
			cout<<"Interest and total_amount is: "<<interest<<"\t"<<total_amount<<endl;
		}
};

int main()
{
	simple_interest_calculator si;
	si.getdata();
	si.showdata();
	
	return 0;
}
