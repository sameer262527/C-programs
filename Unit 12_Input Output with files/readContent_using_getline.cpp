 // program to read the contents of a text file and display them on the screen using insertion operator and getline method.
#include<fstream>
using namespace std;
#include<iostream>

int main()
{
	char str[100];
	ifstream fin;
	fin.open("xyz.txt");
	
	 if (!fin) {
        cerr << "Error opening file!" << endl; // cerr standard error and is used for printing error messages. It's similar to cout 
        return 1;  // Exit the program if file can't be opened
    }
    
	while(!fin.eof())    //using eof function
	{
		fin.getline(str,99);
		cout<<str;
	}
	
	fin.close();
	
	return 0;
}
