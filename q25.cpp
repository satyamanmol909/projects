#include<iostream>
using namespace std;
int sum(int a ,int b)
{
    return a+b;
}
int subtr(int a,int b)
{
    return a-b;
}
int multi(int a,int b)
{
    return a*b;
}
int fract(int a,int b)
{
    return a/b;
}
int main()
{
    int a,b;
    char ch;
    cout<<"enter the first number :";
    cin>>a;
    cout<<"enter second number :";
    cin>>b;
    cout<<endl;
    cout<<"press + for add"<<endl;
    cout<<"press - for add"<<endl;
    cout<<"press * for add"<<endl;
    cout<<"press / for add"<<endl;
    cout<<endl;
    cout<<"enter operation :";
    cin>>ch;
    switch(ch)
    {
        case '+':
                cout<<"sum of"<<" "<<a<<ch<<b<<"="<<sum(a,b);
                break;
        case '-':
                cout<<"subtraction of"<<" "<<a<<ch<<b<<"="<<subtr(a,b);
                break;
        case '*':
                cout<<"multiplication of"<<" "<<a<<ch<<b<<"="<<multi(a,b);
                break;
        case '/':
                cout<<"divide of"<<" "<<a<<ch<<b<<"="<<fract(a,b);
                break;
        default:
                cout<<"thanks";
                break;
    }


    return 0;


}

/* a=4
ch +-*
b 5


4+5





*/