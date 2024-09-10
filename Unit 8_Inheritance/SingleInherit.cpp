// Single Inheritance
#include<iostream>
using namespace std;

class student{
	
	char *name;
	int age;
	
	public:
	student(char *n, int a)
	{
		name=n;
		age=a;
	}
	
	char *getName()
	{
		return name;
	}
	
	void display()
	{
		cout<<"Name:: "<<name<<endl;
		cout<<"Age:: "<<age<<endl;
	}
};

class ForeignStudent: public student{
	
	char *country;
	
	public:
	ForeignStudent(char *n, int a, char *c):student(n,a)
	{
		country=c;
	}
	
	void displayForeign()
	{
		display();
		cout<<"Country:: "<<country<<endl;
	}
};

int main()
{
	ForeignStudent fs("Steven",20,"UK");
	fs.displayForeign();
	
	return 0;
}
