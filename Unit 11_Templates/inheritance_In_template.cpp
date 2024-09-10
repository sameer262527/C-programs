// program to demonstrate inheritance in template classes

#include<iostream>
using namespace std;
template<class T>
class Base{
	T a;
	public:
		void set(T val)
		{
			a=val;
		}
		
		void display()
		{
			cout<<"a = "<<a<<endl;
		}
};
template<class T>
class Derived:public Base<T>{
	
	int b;
	public:
		void set(T val1, T val2)
		{
			Base<T>::set(val1); // Using Base class set to set 'a'
			b=val2;
		}
		
		void display()
		{
			Base<T>::display(); // Call Base class display to print 'a'
			cout<<"b = "<<b<<endl;
		}
};

int main()
{
	Derived<int> x;
	x.set(100,75);
	x.display();
	
	return 0;
}
