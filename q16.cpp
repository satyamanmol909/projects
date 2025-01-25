#include<iostream>
using namespace std;
int main()
{
    float a,b,c,area,s;
    cout<<"area of trangle"<<" ";
    cout<<"enter the first side"<<" ";
    cin>>a;
    cout<<"enter the second side"<<" ";
    cin>>b;
    cout<<"enter the third side"<<" ";
    cin>>c;
    s=(a+b+c)/2;
    area=(s*(s-a)*(s-b)*(s-c))*0.5;
    cout<<"area ="<<area;
    return 0;


}