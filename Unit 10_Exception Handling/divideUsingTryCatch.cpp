#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cout << "Enter the value of a and b: ";
	cin >> a >> b;
	try
	{

		if (b == 0)
		{
			throw(b);
		}

		else
			cout << "Result: " << a / b << endl;
	}
	catch (int i)
	{
		cout<<"Error! Not divisible by 0";
	}
	
	cout<<"Last line.";
}
