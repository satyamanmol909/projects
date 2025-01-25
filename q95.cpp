#include<iostream>
#include<cstring>
using namespace std;

int main() {
    int n, i;
    char str[100];
    
    cout << "Enter the string: ";
    cin >> str;
    
    n = strlen(str);

    for (i = 0; i < n ; i++) {
        if (str[i] == str[n - i - 1]) {
            cout << "The word is  a palindrome." << endl;
            return 0;
        }
    }

    cout << "The word is not a palindrome." << endl;

    return 0;
}

/*satyam
maytas 
ma'am
ma'am
121
121
123
321
0 1 2  */