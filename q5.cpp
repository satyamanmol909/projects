//C++ Program to Find Quotient and Remainder
#include<iostream>
using namespace std;
int main()
{
  int a,b;
float r,q;
    cout<<"enter first number";
    cin>>a;
    cout<<"enter second number";
    cin>>b;
    q=a/b;
    
    cout<<"quo="<<q <<endl;
    r=a%b;
    cout<<"rem="<<r;
    
    return 0;

}
