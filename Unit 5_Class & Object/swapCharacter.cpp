//write a member function called reverseit() that reverses string (an array of character). 
//Use a for loop that swaps the first and last character, then the second and next-to last character and so on. 
//The string should be passed to reverseit() as an argument.

#include <iostream>
using namespace std;
#include <cstring> // for strlen

class StringManipulator {
public:
    void reverseit(char str[]);
};

void StringManipulator::reverseit(char str[]) {
    int n = strlen(str); // Get the length of the string
    for (int i = 0; i < n / 2; ++i) {
        // Swap the characters
        char temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
    }
}

int main() {
    StringManipulator sm;
    char str[] = "Hello, World!";
    
    std::cout << "Original string: " << str << endl;
    sm.reverseit(str);
    std::cout << "Reversed string: " << str << endl;

    return 0;
}

