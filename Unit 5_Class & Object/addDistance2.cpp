// program to add two objects each having private data members feet and inches and get data(inch, feet) from user in main function
#include <iostream>
using namespace std;

class Distance {
    private:
        int feet;
        int inch;
        
    public:
        void setdata(int f, int h) {
            feet = f;
            inch = h;
        }
        
        void adddistance(Distance d1, Distance d2) {
            feet = d1.feet + d2.feet;
            inch = d1.inch + d2.inch;
            feet = feet + inch / 12;
            inch = inch % 12;
        }
        
        void display() {
            cout << feet << " feet, " << inch << " inches" << endl;
        }
};

int main() {
    Distance d1, d2, d3;
    int feet, inch;
    
    cout << "Enter feet and inches for the first distance:" << endl;
    cout << "Feet: ";
    cin >> feet;
    cout << "Inches: ";
    cin >> inch;
    d1.setdata(feet, inch);
    
    cout << "Enter feet and inches for the second distance:" << endl;
    cout << "Feet: ";
    cin >> feet;
    cout << "Inches: ";
    cin >> inch;
    d2.setdata(feet, inch);
    
    d3.adddistance(d1, d2);
    
    cout << "First distance: ";
    d1.display();
    cout << "Second distance: ";
    d2.display();
    cout << "Resulting distance after addition: ";
    d3.display();
    
    return 0;
}

