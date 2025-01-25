#include<iostream>
using namespace std;

int main() {
    int a, b, i = 1, result = 0;

    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    while (i <= b) {
        result += a;  
        i++;          
    }
    cout << "The result of multiplication "<<a<<" and "<<b<<" is " << result << endl;

    return 0;
}
