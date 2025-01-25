//single inheritance
#include<iostream>
using namespace std;
class parents
{
    protected:
    string pname;
    int age;
    double p_no;

};
class child:public parents
{
    protected:
    string name;
    int age;
    string address;
    public:
    void getdata()
    {
        cout<<"enter the parents name :";
        cin>>pname;
        cout<<"enter the parents age :";
        cin>>age;
        cout<<"enter the parents phone number :";
        cin>>p_no;
        cout<<"enter the child name :";
        cin>>name;
        cout<<"enter the child age :";
        cin>>age;
        cout<<"enter the child address :";;
        cin>>address;

    }
    void out()
    {
        cout<<"parents name ="<<pname<<endl;
        cout<<"parents age="<<age<<endl;
        cout<<"parents phone number="<<p_no<<endl;
        cout<<"child name="<<name<<endl;
        cout<<"child age="<<age<<endl;
        cout<<"child address="<<address<<endl;

    }

};
int main()
{
    child s;
    s.getdata();
    s.out();
    return 0;
}