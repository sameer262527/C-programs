#include<iostream>
using namespace std;
class item
{
	long int code;
	string name,item;
	float price;
	public:
		void setdata()
		{
			cout<<"enter name :"<<endl;
			getline(cin,name);
			cout<<"enter item :"<<endl;
			getline(cin,item);
			cout<<"enter code :"<<endl;
			cin>>code;
			cout<<"enter price :"<<endl;
			cin>>price;
		}
		void display()
		{
			cout<<"name:"<<name<<endl;
			cout<<"item:"<<item<<endl;
			cout<<"code:"<<code<<endl;
			cout<<"price:"<<price<<endl;
		}
};
int main()
{
	item it[2];
	int i;
	for(i=0;i<2;i++)
	{
		it[i].setdata();
	}
	for(i=0;i<2;i++)
	{
		it[i].display();
	}
	return 0;
}
