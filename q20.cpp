#include<iostream>
using namespace std;
int fact(int a)
{
    int i=1,f=1;
    while(i<=a)
    {
        f=f*i;
        i++;
    }
     return f;
}
int main()
{
    int a;
    cout<<"enter a nummber =";
    cin>>a;
    cout<<"factorial of"<<" "<<a<<"="<<fact(a);
}

   