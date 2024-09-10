//Array of objects
#include<iostream>
using namespace std;
const int MAX=100;

class Employee{
	
	int id;
	int salary;
	
	public:
		void getdata()
		{
			cout<<"Enter the ID: ";
			cin>>id;
			cout<<"Enter the salary: ";
			cin>>salary;
		}
		
		void putdata()
		{
			cout<<"ID: "<<id<<endl<<"Salary: "<<salary<<endl;
			
		}
};

int main()
{
	Employee e[MAX];
	int n=0;
	char ans;
	do
	{
		cout<<"Employee number "<<n+1<<endl;
		e[n++].getdata();
		cout<<"Enter another(y/n)?: ";
		cin>>ans;
		cout<<"\n";
	}
	while(ans!='n');
	cout<<endl<<"---------Employee Details----------"<<endl;
	for(int j=0; j<n; j++)
	{
		cout<<"\nEmployee Number is:: "<<j+1<<endl;
		e[j].putdata();
	}
	
	return 0;
	
}
