#include<iostream>
using namespace std;
int findhcf(int a,int b) 
{
int tempA = a;
    int tempB = b;
    int n;
    
    // Euclidean algorithm for HCF
    while (b != 0) 
    {
        n = a % b;
        a = b;
        b = n;
    }
    return a;
}
int main() {
    int a , b;
    cout << "enter two numbers:";
    cin >> a >> b;
    cout << "hcf of" << a << " and " << b << "is: " << findhcf(a,b)<< endl;
    return 0;
}