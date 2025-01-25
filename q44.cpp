#include<iostream>
using namespace std;

int main() {
    int a, b, n;
    
    cout << "Enter the first number: ";
    cin >> a;
    
    cout << "Enter the second number: ";
    cin >> b;
    
    // Store the initial values of a and b for reference later
    int tempA = a;
    int tempB = b;
    
    // Euclidean algorithm for HCF
    while (b != 0) {
        n = a % b;
        a = b;
        b = n;
    }
    
    cout << "HCF of " << tempA << " and " << tempB << " is: " << a << endl;
    
    return 0;
}
