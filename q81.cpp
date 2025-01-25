//program to use method overloading
#include<iostream>
using namespace std;
class sum
{
    public:
    int add(int a,int b)
    {
        cout<<"Sum of two numbers is "<<a+b<<endl;
        return (a+b);
    }
    int add(int a,int b,int c)
    {
        cout<<"Sum of three numbers is "<<a+b+c<<endl;
        return (a+b+c);
    }

};
int main()
{
    sum s;
    s.add(10,20);
    s.add(20,30,60);
    return 0;
}