#include<iostream>
using namespace std;
int main()
{
    int x=0,fact =1,i;
    cout<<"input a number"<<"=";
    cin>>x;
    for(i=1;i<=x;i++)
    {
       fact=fact*i; 
    }
    cout<<"factorial of"<<" "<<x<<" =";
    while(1<=x)
       {
        cout<<x<<"*";
         x--;
       }
       cout<<"="<<fact;
    return 0;
}

