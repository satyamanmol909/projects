//the syntax of c++
#include<iostream>//header file
using namespace std;
int main()//main function
{
    string a;//declaring a.
    cout<<"enter the value of a";//print the written
    cin >>a;//input a value
    cout<<"value ="<<a;
    return 0;

}





//program to use of datatype
#include<iostream>
using namespace std;
int main()
{
    int a;
    float b;
    char c;
    double d;
    string e;
    cout<<"enter the value of a   in integer form ";
    cin>>a;
    cout<<"enter the value of b in float form ";
    cin>>b;
    cout<<"enter the valueof c  in character form ";
    cin>>c;
    cout<<"enter the value of d in double form ";
    cin>>d;
    cout<<"enter the value of e in string form ";
    cin>>e;
    cout<<"value of a="<<a<<endl;
    cout<<"value of b="<<b<<endl;
    cout<<"value of c="<<c<<endl;
    cout<<"value of d="<<d<<endl;   
    cout<<"value of e="<<e<<endl;
    return 0;

}
//program to sum of two integer number
#include<iostream>
using namespace std;    
int main()
{
    long double a,b,sum;
    cout<<"enter the value of a ";
    cin>>a;
    cout<<"enter the value of b ";
    cin>>b;
    sum=a+b;
    cout<<"sum of a and b is "<<sum;
    return 0;
}