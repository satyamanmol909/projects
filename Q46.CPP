//PRINT THE LCM OF TWO NUMBERS
#include<iostream>
using namespace std;
int main()
{
    int a,b,lcm;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    for(int i=1;i<=a*b;i++)
    {
        if(i%a==0 && i%b==0)
        {
            lcm=i;
            break;
        }
    }
            cout<<"The LCM of "<<a<<" and "<<b<<" is "<<lcm;
return 0;
}