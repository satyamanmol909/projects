#include <iostream>
using namespace std;

int main() {
    int num = 10;
    int* ptr = &num;
    cout << "Value of num using variable: " << num << endl;
    cout << "Value of num using pointer: " << *ptr << endl;
    *ptr = 20;
    cout << "Updated value of num using variable: " << num << endl;
    cout << "Updated value of num using pointer: " << *ptr << endl;
    return 0;
}
