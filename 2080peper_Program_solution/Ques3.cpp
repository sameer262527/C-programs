#include<iostream>
using namespace std;

class people{
	
	int age;
	float salary;
	
	public:
		constructor(int a, float s)
		{
			age=a;
			salary=s;
		}
		
		void displayPerson()
		{
			cout<<endl<<"Age = "<<age<<","<<"salary = "<<salary;
			
		}
};

class student:public person{
	
	int sid;
	float CGPA;
	public:
		student(int a, float s, int si, float GPA):person(a,s)
		{
			sid=si;
			CGPA=GPA;
		}
		
		void displayStudent()
		{
			displayPerson();
			cout<<","<<"sid = "<<sid<<","<<"CGPA = "<<CGPA<<endl;
		}
};

class Doctor:public person{
	
};
