//palandrome number
#include <iostream>
using namespace std;

bool isPalindrome(int num) {
    int originalNum = num;
    int reversedNum = 0;
    
    while (num > 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }
    
    return originalNum == reversedNum;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    
    if (isPalindrome(number)) {
        cout << "Yes, it's a palindrome number." << endl;
    } else {
        cout << "No, it's not a palindrome number." << endl;
    }

    return 0;
}
