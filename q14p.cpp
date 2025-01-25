//C++ Program to Calculate Power of a Number
#include<iostream>
using namespace std;
int power(double a,double b)
{
    double pow=1;
for (int i = 1; i <=b; i++)
 {
        pow = pow * a;
}    
return pow;
}
int main()
{
    double a,b;
cout<<"enter the base ="<<" ";
cin>>a;
cout<<"enter the power ="<<" ";
cin>>b;
cout<<"power ="<<" "<<power(a,b);
return power(a,b);
}