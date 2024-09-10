// program to write data by using write() member function

#include<fstream>
#include<iostream>
using namespace std;

struct student {
    int roll;
    char name[30];
//    string name;
    char address[60];
};

int main() {
    student s;
    ofstream fout;
    fout.open("student.txt");  // Open in binary mode when we use ,ios::binary

    if (!fout) {  // Check if file was opened successfully
        cout << "Error opening file!" << endl;
        return 1;
    }

    cout << "Enter Roll number: ";
    cin >> s.roll;
    cout << "Enter Name: ";
    cin >> s.name;
//    cin.ignore();
//    getline(cin, s.name);
    cout << "Enter Address: ";
    cin >> s.address;

    fout.write((char*)&s, sizeof(student));

    cout << "\nData is written to the file student.txt" << endl;
    fout.close();

    cout << "Done!!!" << endl;

    return 0;
}

/**
#include<fstream>
#include<iostream>

struct student
{
	int roll;
	char name[30];
	char address[60];
};

int main()
{
	student s;
	ofstream fout;
	fout.open("student.dat");
	cout<<"\n Enter Roll number: ";
	cin>>s.roll;
	cout<<"\n Enter Name: ";
	cin>>s.name;
	cout<<"\n Enter Address: ";
	cin>>s.address;
	fout.write((char*)&s,sizeof(student))
	cout<<"Data is written to the file student.dat"<<endl;
	fout.close();
	cout<<"Done"<<endl;
	
	return 0;
} **/

