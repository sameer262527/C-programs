/*** Write a program to create a class account with data members account_no, account holder's name, balance and minimum balance.
Add member functions create_account , deposite, withdraw and balance_inquiry to the class. 
Create an object of the account class and show all operation with this ***/

#include<iostream>
#include<string>
using namespace std;
class account{
	private:
	int account_no;
	string account_holder_name;
	double balance;
	double minimum_balance;
	public:
	void create_account(int acc, string& holder_name, double int_balance, double min_balance)
	{
	 account_no=acc;
	 account_holder_name=holder_name;
	 balance=int_balance;
	 minimum_balance=min_balance;
	 cout<<"Your account is successfully created "<<endl<<endl;
	 cout<<"And your Information is: "<<endl;
	 cout<<" Account No : "<<account_no<<endl;
	cout<<" Account Holder : "<<account_holder_name<<endl;
	cout<<"Current Balance : "<< balance<<endl;
	cout<<"Minimum Balance: "<<minimum_balance<<endl;
	}
	void deposite()
	{
	double amount;
	cout<<"Enter amount to deposited: "<<endl;
	cin>>amount;
	cout<<"Deposited amount on your account = "<<amount<<endl;
	balance += amount;
	cout<<"Now your total amount on your account = "<<balance;
	}
	
	void withdraw()
	{
		double amount;
		cout<<"Enter amount to withdraw: ";
		cin>>amount;
		if(balance-amount<minimum_balance)
		{
			cout<<"Sorry! Insufficient fund to maintain minimum balance "<<endl;
		}
		else
		{
			balance -= amount;
			cout<<"Withdraw amount from your account = "<<amount<<endl;
			cout<<"After withdraw your remaining amount on your account = "<<balance;
		}
	}
	
	void balance_inquiry()
	{
		
		cout<<"Your current amount on your account: "<< balance<<endl;
	
		
		
	}
};
int main()
{
	account myaccount;
	int acc_no;
	string holder_name;
	double initial_balance;
	double minimum_balance;
	cout<<"Enter Account Number: ";
	cin>>acc_no;
	cin.ignore(); // Clear the newline character from the buffer
	cout<<"Enter Account Holder's Name : ";
	getline(cin,holder_name);
	cout<<"Enter Initial Balance: ";
	cin>>initial_balance;
	cout<<"Enter Minimum Balance: ";
	cin>>minimum_balance;
	myaccount.create_account(acc_no,holder_name,initial_balance,minimum_balance);
	
	int choice;
	do
	{
		cout<<endl<<"Choose an operation: "<<endl<<endl;
		cout<<" 1. Deposite "<<endl<<" 2. Withdraw "<<endl<<" 3. Balance-Inquiry "<<endl<<" 4. Exit"<<endl<<endl;
		cout<<"Enter your choice: ";
		cin>>choice;
		switch(choice)
		{
			case 1: 
			myaccount.deposite();
			break;
			
			case 2:
			myaccount.withdraw();
			break;
			
			case 3:
			myaccount.balance_inquiry();
			break;
			
			case 4:
			cout<<"Exiting the program thank you"<<endl;
			break;
			
			default:
			cout<<"Invalid choice: Try Again!! Thank you"<<endl;	
		}
	}
	while(choice !=4);
	return 0;
}
