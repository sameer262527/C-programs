 // Multiple Inheritance
#include<iostream>
using namespace std;

class Teacher{
	
	int tid;
	char subject[20];
	
	public:
	void getTeacher()
	{
		cout<<"Enter teacher id and subject: ";
		cin>>tid>>subject;
	}
	
	void displayTeacher()
	{
		cout<<"Teacher ID:: "<<tid<<endl;
		cout<<"Subject:: "<<subject<<endl;
	}
};

class Staff{
	
	int sid;
	char level[10];
	public:
	void getStaff()
	{
		cout<<"Enter staff id and level: ";
		cin>>sid>>level;
	}
	
	void displayStaff()
	{
		cout<<"Staff ID:: "<<sid<<endl;
		cout<<"Staff level:: "<<level<<endl;
	
	}
};

class cordinator: public Teacher,public Staff{
	char program[10];
	public:
	void getdata()
	{
		getTeacher();
		getStaff();
		cout<<"Enter program: ";
		cin>>program;
	}
	
	void displaydata()
	{
		displayTeacher();
		displayStaff();
		cout<<"Program:: "<<program;
	}
};

int main()
{
	cordinator c;
	c.getdata();
	cout<<"------Coordinator details-----"<<endl;
	c.displaydata();
	
	return 0;
}
