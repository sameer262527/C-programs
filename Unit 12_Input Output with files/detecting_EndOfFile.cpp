// Detecting end of file with cin.get()
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	char ch;
	ifstream fin;
	fin.open("abc.txt");
	
	 if (!fin) {
        cerr << "Error opening file!" << endl;
        return 1;  // Exit the program if file can't be opened
    }
    
	while(!fin.eof())    //using eof function
	{
		fin.get(ch); // reads one character at a time
		cout.put(ch); // equivalent cout<<ch;
	}
	
	fin.close();
	
	return 0;
}
