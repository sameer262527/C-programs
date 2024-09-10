#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Enter number of students: ";
	cin>>n;
	//allocate memory dynamically
	int *ages=new int(n);
	cout<<"Enter the ages of the student:\n"<<endl;
	for(int i=0; i<=n; i++)
	{
		cin>>ages[i];
	}
	
	//calculate average ages
	int sum=0;
	for(int i=0;i<=n;i++)
	{
		sum+=ages[i];
	}
	
	float average;
	average=float(sum)/n;
	cout<<"The average age = "<<average;
	
	//deallocates the memory
	delete[]ages;
	return 0;
}
