#include<iostream>
#include<string>
using namespace std;

class actor{
	
	string name;
	int rating;
	public:
	actor(string n, int r)
	{
		name=n;
		rating=r;		
	}
	
	void display() const
	{
		if(rating>5)
		{
			cout<<"Actor name = "<<name<<endl;
		}
	}
	
};

int main()
{
	const actor a1("SRK",9);
	const actor a2("Dayahang",5);
	const actor a3("Shushant",7);
	
	a1.display();
	a2.display();
	a3.display();
	
	return 0;
}
