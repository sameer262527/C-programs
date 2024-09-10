/** create a class shape with data members length, breadth and height and with member function Area(pure virtual). 
Derive the class Rectangle from shape and override Area function. Again derive another class Triangle and override the member function Area. 
Finally create objects of Rectangle and Triangle class and calculate their areas by using base class pointer **/ 

#include <iostream>
using namespace std;

// Base class 'shape' with pure virtual function 'Area'
class shape {
protected:
    float length, breadth, height;
public:
    // Virtual function for setting dimensions
    void setDimensions(float l, float b, float h = 0) {
        length = l;
        breadth = b;
        height = h; // For triangles, height will be used
    }
    
    // Pure virtual function for area
    virtual float Area() = 0;
};

// Derived class 'Rectangle' from base class 'shape'
class Rectangle : public shape {
public:
    // Override Area function for rectangle
    float Area() override {
        return length * breadth;
    }
};

// Derived class 'Triangle' from base class 'shape'
class Triangle : public shape {
public:
    // Override Area function for triangle
    float Area() override {
        return 0.5 * length * height;
    }
};

int main() {
    // Base class pointer
    shape *ptr;

    Rectangle rect;
    ptr = &rect; // Base class pointer points to Rectangle object
    ptr->setDimensions(5, 3); // Setting length and breadth for rectangle
    cout << "Area of Rectangle: " << ptr->Area() << endl;

    Triangle tri;
    ptr = &tri; // Base class pointer points to Triangle object
    ptr->setDimensions(4, 0, 6); // Setting base (length) and height for triangle
    cout << "Area of Triangle: " << ptr->Area() << endl;

    return 0;
}

