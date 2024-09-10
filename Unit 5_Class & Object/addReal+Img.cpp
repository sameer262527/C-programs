// program that adds two objects of complex class using concept of Return-by-value. 
#include<iostream>
using namespace std;
class complex {
	
	int real,img;
	
	public:
		void getdata()
		{
			cout<<"Enter values of real and imaginary"<<endl;
			cin>>real>>img;	
		}
		
		void display()
		{
			cout<<"("<<real<<"+i"<<img<<")"<<endl;
		}
		
		complex addComplex(complex c)
		{
			complex temp;
			temp.real=real+c.real;
			temp.img=img+c.img;
			return temp;
		}
};
int main()
{
	complex c1, c2, c3;
	c1.getdata();
	c2.getdata();
	c3=c2.addComplex(c1);
	cout<<"Addition";
	c3.display();
	
	return 0;
 	
}   
