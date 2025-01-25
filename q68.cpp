#include <iostream>
using namespace std;

class Example {
private:
    int value;

public:
    // Constructor with a parameter
    Example(int val) {
        value = val;
        cout << "Constructor called! Value initialized to " << value << endl;
    }

    // Destructor
    ~Example() {
        cout << "Destructor called! Object with value " << value << " is destroyed." << endl;
    }

    // A method to display the value
    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    // Creating an object of class Example
    Example obj1(10);  // Constructor is called here
    obj1.display();

    // The object is automatically destroyed when it goes out of scope
    return 0;  // Destructor will be called here as obj1 goes out of scope
}
