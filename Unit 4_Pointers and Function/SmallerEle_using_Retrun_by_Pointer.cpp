// Return by Pointer
#include<iostream>
using namespace std;
int *min(int *x, int *y){
	if(*x < *y)
	return x;
	else
	return 0;
}

int main()
{
	int a,b;
	cout<<"Enter two numbers"<<endl;
	cin>>a>>b;
//	cin>>a>>b;
	int *m=min(&a, &b);
	cout<<"Smaller elements is: "<< *m<<endl;
	return 0;
	
}

