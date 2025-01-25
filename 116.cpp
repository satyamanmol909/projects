#include<iostream>
using namespace std;
class parent1
{
    protected:
    string p_name;
    int p_age;
};
class parent2
{
    protected:
    string p_name2;
    int p_age2;
};
class child:public parent1,parent2
{
    public:
    string c_name;
    string c_age;
    void input()
    {
        cout<<"Enter parent1 name: ";
        cin>>p_name;
        cout<<"enter parent1 age:";
        cin>>p_age;
        cout<<"enter parent2 name: ";
        cin>>p_name2;
        cout<<"enter parent2 age: ";
        cin>>p_age2;
        cout<<"enter the child name:";
        cin>>c_name;
        cout<<"enter the child age:";
        cin>>c_age;

    }
    void out()
    {
        cout<<"Parent1 name is "<<p_name<<endl;
        cout<<"parent1 age is "<<p_age<<endl;
        cout<<"parent2 name is "<<p_name2<<endl;
        cout<<"parent2 age is "<<p_age2<<endl;
        cout<<"chid name is "<<c_name<<endl;
        cout<<"child age is "<<c_age<<endl;
    }
};
int main()
{
    child c1;
    c1.input();
    cout<<endl;
    c1.out();
    return 0;
}