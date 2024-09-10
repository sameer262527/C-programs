#include <iostream>
using namespace std;
int sumOfNaturalNumbers(int );


int main() {
    int n;
    
    cout << "Enter a natural number: ";
    cin >> n;
    
    if (n <= 0) 
	{
        cout << "Please enter a positive natural number."<<endl;
    } 
	else 
	{
        int sum = sumOfNaturalNumbers(n);
        cout << "The sum of the first " << n <<" natural numbers is:"<<sum<<endl;
    }
    
    return 0;
}

int sumOfNaturalNumbers(int n) {
    int sum = 0;
    for(int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

