#include <iostream>
using namespace std;

class Rectangle {
    private:
        float length;
        float breadth;

    public:
        Rectangle() {
            length = 0;
            breadth = 0;
        }
        Rectangle(float l, float b) {
            length = l;
            breadth = b;
        }

        void displayArea() {
            float area = length * breadth;
            cout << "Area of the rectangle: " << area << endl;
        }
};

int main() {
    Rectangle rect1;
    cout << "Using default constructor:\n";
    
    float l, b;
    cout << "\nEnter the length and breadth of the rectangle: ";
    cin >> l >> b;
    rect1.displayArea();
    
    Rectangle rect2(l, b);
    cout << "\nUsing parameterized constructor:\n";
    rect2.displayArea();

    return 0;
}
