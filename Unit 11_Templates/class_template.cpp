 // class templates to find larger of two numbers
#include<iostream>
using namespace std;
template<class T>
class mypair
{
	T a,b;
	public:
		mypair(T first,T second)
		{
			a=first;b=second;
		}
		
		T getmax()
		{
			
			T retVal;
			retVal=a>b?a:b;
			return retVal;
		}
};

int main()
{
	mypair<int> object1(100,75);
	cout<<"larger="<<object1.getmax()<<endl;
	mypair<double> object2(90.8,95.6);
	cout<<"larger="<<object2.getmax()<<endl;
	
	return 0;
}

