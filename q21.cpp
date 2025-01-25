
#include <iostream>
using namespace std;

int main() {
    int num;
    int fact = 1;
    int *p_num = &num;   
    int *p_fact = &fact; 

    cout << "Enter a number: ";
    
    cin >> *p_num;     

    for (int i = 1; i <= *p_num; ++i) 
    {
        *p_fact = *p_fact * i;    
    }

    cout << "Factorial of " << *p_num << " is " << *p_fact << endl;

    return 0;
}
