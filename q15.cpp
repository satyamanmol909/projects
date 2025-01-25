//area  of a traingle
#include<iostream>
using namespace std;
int main()
{
    float b,n,h;
    cout<<"___________print the area of trangle_____________"<<endl;
    cout<<"enter the side of the trangle"<<endl;
    acd:
    cout<<endl;
    cout<<"enter base of the trangle"<<" ";
    cin>>b;
    cout<<"enter the hight"<<" ";
    cin>>h;
    
    cout<<"area of trangle"<<"="<<(b*h)/2<<endl;
    cout<<"if you want to find the area again press 1"<<endl;
    cin>>n;
    if(n==1){
        goto acd;
    }
    else{
        cout<<"thanks";
    }
    
    return 0;

}