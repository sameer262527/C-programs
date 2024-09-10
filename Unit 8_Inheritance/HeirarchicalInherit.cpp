  // hierarchical Inheritance

#include<iostream>
using namespace std;

class Employee {
	
	int eid, salary;
	public:
	void getEmp()
	{
		cout<<"Enter id and salary of employee ";
		cin>>eid>>salary;
	}
	
	void displayEmp()
	{
		cout<<"Employee ID:: "<<eid<<endl;
		cout<<"Salary:: "<<salary<<endl;
	}
};

class Engineer: public Employee {
	
	char dept[10];
	public:
	void getdata()
	{
		getEmp();
		cout<<"Enter Department ";
		cin>>dept;
	}	
	
	void display()
	{
		displayEmp();
		cout<<"Department:: "<<dept<<endl;	
	}	
};

class Typist: public Employee {
	
	int ts; //typing speed
	public:
	void getdata()
	{
		getEmp();
		cout<<"Enter typing speed ";
		cin>>ts;
	}
	
	void display()
	{
		displayEmp();
		cout<<"Typing speed:: "<<ts<<endl;
		cout<<"\n";
	}
};

int main(){
	Engineer e;
	Typist t;
	e.getdata();
	t.getdata();
	cout<<"-----Employee details------"<<endl;
	e.display();
	cout<<endl;
	t.display();
	
	return 0;
}
