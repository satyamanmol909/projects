#include<iostream>
using namespace std;

int main() {
    int a, b, result = 0;

    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    for (int i=1;i <= b;i++) {
        result += a;  
                
    }
    cout << "The result of multiplication "<<a<<" and "<<b<<" is " << result << endl;

    return 0;
}
