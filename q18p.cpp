#include <iostream>
using namespace std;
int main() {
    int number, originalNum, reversedNum = 0, digit;
    cout << "Enter a number: ";
    cin >> number;
    originalNum = number;  
    while (number > 0)
     {
         number =number/10; 
        digit = number % 10;           
        reversedNum = reversedNum * 10 + digit;                       
    }
    if (originalNum == reversedNum) {
        cout << "Yes, it's a palindrome number." << endl;
    } else {
        cout << "No, it's not a palindrome number." << endl;
    }
    return 0;
}





